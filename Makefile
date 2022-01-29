CC = g++
FLAGS = -Wall -Wextra -g 
OP_FLAGS = -O3
EXEC = main

all: run

MAIN = main.c
MAIN_O = main.o

GAME = Game.c
GAME_O = Game.o
$(GAME_O): $(GAME)
	$(CC) -c $(GAME) $(OP_FLAGS)

build:
	$(CC) $(MAIN_O) $(GAME_O) -o $(EXEC) $(OP_FLAGS)

run: build
	./$(EXEC)
	rm -rf $(EXEC)
	rm -r *.o

clean:
	rm -rf $(EXEC)
	rm -r *.o