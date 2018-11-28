# File: Makefile
# Author: Nicholas Pica
# Makfile for github test

# Compiler Version
CC=g++

# Debugging flag -g
DEBUG=-g

# Target
TARGET=Git-Test

# Compile with all errors and warings
CFLAGS=-c -Wall $(DEBUG)

# Makefile syntax:
# target: dependencies
# (tab) system command(s)

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o *~ $(TARGET)
