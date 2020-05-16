UNAME=$(shell uname)

CCFLAGS=-Wall -Wextra -Wconversion -Wredundant-decls -Wshadow -Wno-unused-parameter -O3
CC=clang

all: test

remake: clean all

%.o: %.c ctest.h
	$(CC) $(CCFLAGS) -c -o $@ $<

test: main.o ctest.h mytests.o
	$(CC) $(LDFLAGS) main.o mytests.o -o test

clean:
	rm -f test *.o

