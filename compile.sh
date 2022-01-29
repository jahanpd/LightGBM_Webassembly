cd model
emcc main.c -o main.js -s MODULARIZE -s EXPORTED_RUNTIME_METHODS=ccall,cwrap EXPORTED_FUNCTIONS="[''_malloc]"
