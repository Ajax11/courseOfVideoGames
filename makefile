CC = nvcc
CPP = g++
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
CFLAGS = -std=c++11
LDFLAGS= -lglut -lGL -lGLU


all: main

main:
	$(CPP) $(CFLAGS) $(LDFLAGS) $(SOURCES) -o game.out

clean: 
	rm -rf *o *out 
	clear
