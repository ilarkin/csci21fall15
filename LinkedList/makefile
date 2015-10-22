# Makefile for programming challenge 17
#
# CSCI 21, Fall 2015
#
# Programmer: Ian Larkin
#

# Target for programming challenge 17
# Date completed: 10/22/15
FLAGS = -Wall -Wextra -pedantic

pc17: pc17.o SLNode.o
	g++ -o pc17 $(FLAGS) pc17.o SLNode.o
	
pc17.o: pc17.cpp
	g++ -c $(FLAGS) pc17.cpp
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp

clean: 
	rm -f *.o

cleanall: clean
	rm -f pc17





