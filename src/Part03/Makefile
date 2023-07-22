
all: build

build: obj
	gcc main.c -lfcgi -o main
	./main

obj: main.c
	gcc -c main.c