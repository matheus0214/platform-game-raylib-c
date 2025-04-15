CC=gcc

build:
	mkdir -p ./build
	$(CC) ./src/main.c -o ./build/game

run: build
	./build/game

.PHONY: build run