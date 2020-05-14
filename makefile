all: bin/prog

bin/prog: build/main.o build/geometry.o
	g++ -Wall -Werror build/main.o build/geometry.o -o bin/prog

build/main.o: src/main.c src/geometry.h
	g++ -Wall -Werror -I src -c src/main.c -o build/main.o

build/geometry.o: src/geometry.c
	g++ -Wall -Werror -I src -c src/geometry.c -o build/geometry.o

format: 
	clang-format -i src/main.c src/geometry.h src/geometry.c

.PHONY:	clean

clean:
	rm -rf build/geometry.o build/main.o bin/prog
