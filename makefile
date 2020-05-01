all: bin/prog

bin/prog: build/main.o build/geometry.o
	gcc -Wall -Werror build/main.o build/geometry.o -o bin/prog

build/main.o: src/main.c src/geometry.h
	gcc -Wall -Werror -l src -c src/main.c -o build/main.o

build/geometry.o: src/geometry.c
	gcc -Wall -Werror -l src -c src/geometry.c -o build/geometry.o

clean:
	rm -rf build/*.o