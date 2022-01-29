model.so: main.o
	clang -shared -O3 -o model.so main.o -std=c99 
main.o: main.c
	clang -c -O3 -o main.o main.c -fPIC -std=c99 
