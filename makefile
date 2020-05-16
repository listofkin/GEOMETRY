all: bin/prog

bin/prog: build/main.o build/geometry.o build/intersection.o
	g++ -Wall -Werror build/main.o build/geometry.o build/intersection.o -o bin/prog

build/main.o: src/main.c src/geometry.h src/Intersection.h
	g++ -Wall -Werror -I src -c src/main.c -o build/main.o

build/geometry.o: src/geometry.c
	g++ -Wall -Werror -I src -c src/geometry.c -o build/geometry.o

build/intersection.o: src/Intersection.c
	g++ -Wall -Werror -I src -c src/Intersection.c -o build/intersection.o

format: 
	clang-format -i src/main.c src/geometry.h src/geometry.c

run:
	./bin/prog	

.PHONY:	clean

clean:
	rm -rf build/*.o bin/prog
