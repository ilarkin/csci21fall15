# Makefile for programming challenge 17
#
# CSCI 21, Fall 2015
#
# Programmer: Ian Larkin
#



FLAGS = -Wall -Wextra -pedantic

# Target for programming challenge 17
# Date completed: 10/22/15
#pc17: pc17.cpp SLNode.cpp
#	g++ $(FLAGS) -o pc17 SLNode.cpp pc17.cpp


pc17: pc17.o SLNode.o
	g++ $(FLAGS) -o pc17 pc17.o SLNode.o

pc17.o: pc17.cpp SLNode.h
	g++ $(FLAGS) -c pc17.cpp

SLNode.o: SLNode.h




