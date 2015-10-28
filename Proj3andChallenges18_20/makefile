

#makefile for in class testing and for programming challenge 18
#Ian Larkin
#Last update 10/27/15

FLAGS = -Wall -Wextra -pedantic


pc18: pc18.o SLNode.o SList.o
	g++ -o pc18 $(FLAGS) pc18.o SLNode.o SList.o

test: test.o SLNode.o SList.o
	g++ -o test $(FLAGS) test.o SLNode.o SList.o

pc18.o: pc18.cpp
	g++ -c $(FLAGS) pc18.cpp
	
test.o: test.cpp
	g++ -c $(FLAGS) test.cpp
	
SList.o: SList.h SList.cpp
	g++ -c $(FLAGS) SList.cpp
	
SLNode.o: SLNode.h SLNode.cpp
	g++ -c $(FLAGS) SLNode.cpp

clean: 
	rm -f *.o

cleanall: clean
	rm -f sltest





