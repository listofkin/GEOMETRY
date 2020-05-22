all: bin/prog bin/test format

bin/prog: build/src/main.o build/src/geometry.o build/src/intersection.o
	g++ -Wall -Werror build/src/main.o build/src/geometry.o build/src/intersection.o -o bin/prog

build/src/main.o: src/main.c src/geometry.c src/Intersection.c
	g++ -Wall -Werror -I src -c src/main.c -o build/src/main.o

build/src/geometry.o: src/geometry.c
	g++ -Wall -Werror -I src -c src/geometry.c -o build/src/geometry.o

build/src/intersection.o: src/Intersection.c
	g++ -Wall -Werror -I src -c src/Intersection.c -o build/src/intersection.o

format: src/geometry.c src/geometry.h src/Intersection.c src/Intersection.h src/main.c  
	clang-format -i src/main.c src/Intersection.c src/geometry.c src/geometry.h src/Intersection.h test/test.c test/main.c

bin/test: build/test/main.o build/test/test.o
	g++ -Wall -Werror build/test/main.o build/test/test.o build/src/intersection.o build/src/geometry.o -o bin/test

build/test/main.o: thirdparty/ctest.h
	g++ -I thirdparty -c test/main.c -o build/test/main.o

build/test/test.o: src/geometry.h thirdparty/ctest.h src/Intersection.h
	g++ -I thirdparty -I src -c test/test.c -o build/test/test.o

run:
	./bin/prog

run1: 
	./bin/test		

.PHONY:	clean

clean:
	rm -rf build/src/*.o build/test/*.o bin/prog
