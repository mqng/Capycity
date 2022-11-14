CC = g++
SRC_DIR = ./src
OBJ_DIR = obj
INC_DIR = ./include/

EXE = ./capycity

CFLAGS = -Wall -g -I $(INC_DIR)

all:
	$(CC) $(CFLAGS) -o $(EXE) $(SRC_DIR)/*.cpp
