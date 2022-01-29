let t = require('./main.js');
t().then((Module) => {

let vals = new Float64Array([0.1, 0.3, 0.5, 0.7, 0.3, 0.7]);
let cols_ind = new Int32Array([2, 4, 5, 1, 3, 4,]);
let rows_ptr = new Int32Array([0, 3, 6]);

var valbuf = Module._malloc(vals.length*vals.BYTES_PER_ELEMENT);
Module.HEAPF64.set(vals, valbuf / vals.BYTES_PER_ELEMENT);

var colsbuf = Module._malloc(cols_ind.length*cols_ind.BYTES_PER_ELEMENT);
Module.HEAP32.set(cols_ind, colsbuf / cols_ind.BYTES_PER_ELEMENT);

var rowbuf = Module._malloc(rows_ptr.length*rows_ptr.BYTES_PER_ELEMENT);
Module.HEAP32.set(rows_ptr, rowbuf / rows_ptr.BYTES_PER_ELEMENT);

var resbuf = Module._malloc((rows_ptr.length-1)*vals.BYTES_PER_ELEMENT);

const api = {
  predict: Module.cwrap('pred', null, 
            ['number', 'number', 'number', 'number', 'number', 'number', 'number',]),
};

api.predict(
  valbuf,
  rowbuf,
  colsbuf,
  resbuf,
  2,
  10,
  0
);
var output_array = new Float64Array(Module.HEAP32.buffer, resbuf, 2);
console.log(output_array);
});

