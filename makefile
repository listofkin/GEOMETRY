all: bin/prog

bin/prog: build/main.o build/geometry.o
	gcc -Wall -Werror build/main.o build/geometry.o -o bin/prog

build/main.o: src/main.c src/geometry.h
	gcc -Wall -Werror -I src -c src/main.c -o build/main.o

build/geometry.o: src/geometry.c
	gcc -Wall -Werror -I src -c src/geometry.c -o build/geometry.o

clean:
<<<<<<< HEAD
	rm -rf build/*.o
	rm -rf bin/*
=======
	rm -rf build/geometry.o build/main.o
>>>>>>> Fixed makefile
