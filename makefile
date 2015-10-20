# Makefile for programming challenges
#
# CSCI 21, Fall 2015
#
# Programmer: Ian Larkin
#

# Target for programming challenge 7
# Date completed: 9/15/15

FLAGS = -Wall -Wextra -pedantic


pc7: pc7.cpp
	g++ $(FLAGS) -o pc7 pc7.cpp


# Target for programming challenge 8
# Date completed: 9/17/15
pc8: pc8.cpp
	g++ $(FLAGS) -o pc8 pc8.cpp
	

# Target for programming project 1
# Date completed: 9/18/15
project1: project1.cpp
	g++ $(FLAGS) -o project1 project1.cpp
	
# Target for programming challenge 9
# Date completed: 9/22/15
pc9: pc9.cpp
	g++ $(FLAGS) -o pc9 pc9.cpp
	
# Target for programming challenge 10
# Date completed: 9/24/15
pc10: pc10.cpp
	g++ $(FLAGS) -o pc10 pc10.cpp
	
	
# Target for programming challenge 11
# Date completed: 9/29/15
pc11: pc11.cpp
	g++ $(FLAGS) -o pc11 pc11.cpp
	
# Target for programming challenge 12
# Date completed: 10/1/15
pc12: pc12.cpp
	g++ $(FLAGS) -o pc12 pc12.cpp
	
# Target for programming challenge 14
# Date completed: 10/13/15
pc14: pc14.cpp
	g++ $(FLAGS) -o pc14 pc14.cpp
	
		
# Target for programming challenge 16
# Date completed: 10/20/15
pc16: pc16.cpp
	g++ $(FLAGS) -o pc16 pc16.cpp
		
	
	
	
clean: 
	rm *.o
	
