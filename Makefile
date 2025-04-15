CC=gcc
CFLAGS=-Iinclude
LDFLAGS= -lraylib -lm
SRC=$(shell find src -name '*.c')

build:
	mkdir -p ./build
	$(CC) $(CFLAGS) $(SRC) -o ./build/game $(LDFLAGS)

run: build
	./build/game

.PHONY: build run