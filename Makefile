CC=gcc
CFLAGS=-Iinclude
LDFLAGS= -lraylib -lm

build:
	mkdir -p ./build
	$(CC) $(CFLAGS) ./src/main.c -o ./build/game $(LDFLAGS)

run: build
	./build/game

.PHONY: build run