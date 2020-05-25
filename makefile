all: bin/prog bin/test

bin/prog: build/src/main.o build/src/geometry.o build/src/Intersection.o
	gcc -Wall -Werror build/src/main.o build/src/geometry.o build/src/Intersection.o -o bin/prog -lm

build/src/main.o: src/main.c 
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/geometry.o: src/geometry.c
	gcc -Wall -Werror -c src/geometry.c -o build/src/geometry.o

build/src/Intersection.o: src/Intersection.c
	gcc -Wall -Werror -c src/Intersection.c -o build/src/Intersection.o -lm

build/test/main.o: test/main.c
	gcc -Wall -Werror -I thirdparty -c test/main.c -o build/test/main.o

build/test/test.o: test/test.c
	gcc -Wall -Werror -I thirdparty -I src -c test/test.c -o build/test/test.o

bin/test: build/test/test.o build/test/main.o
	gcc -Wall -Werror build/src/geometry.o build/src/Intersection.o build/test/test.o build/test/main.o -o bin/test -lm

run:
	./bin/prog

run1: 
	./bin/test		

.PHONY:	clean

clean:
	rm -rf build/src/*.o build/test/*.o bin/prog
