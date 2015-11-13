/*
 * Programming Challenge 23 - UNIT TEST
 * Ian Larkin 
 * November 12, 2015
 */
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <sstream>
#include <string>
using std::string;
using std::stringstream;

/*
 * Compute and return the factorial of a value, using a recursive algorithm. Zero factorial
 * will return 1.
 * @param value an unsigned integer containing the value for which the factorial will be computed
 * @return an unsigned integer containing the computed factorial of the value
*/
unsigned int factorial (unsigned int value);

/*
 * Return a specified value in a Fibonacci sequence, using a recursive algorithm. The lowest value requested in the sequence
 * must never be less than one.
 * @param fibValue an unsigned integer specifying which value in the Fibonacci sequence to return
 * @return an unsigned integer containing the requested value in the Fibonacci sequence
 */
unsigned int fibonacci (unsigned int fibValue);

/*
 * Test a single word to see if it is a palindrome, using a recursive algorithm. The word must be all in the same case 
 * (upper or lower) and cannot contain spaces, digits, or punctuation.
 * @param word a string containing the word to be tested
 * @return true of word is a palindrome, else false; empty string and single character strings
 *         are considered palindromes
 */
bool wordIsPalindrome (string word);

/*
 * Produce a string containing the contents of an array, separated by single spaces, 
 * starting at a specified index and going forward to the end of the array, using a recursive algorithm. The returned 
 * string will contain an extra space character after the last value added.
 * @param array an integer array containing the values to be added to the string
 * @param startIndex an unsigned integer containing the index of the first value in the array to be added
 *        to the output string
 * @param size an unsigned integer containing the number of elements in the array
 * @return a string containing the contents of the array, separated by spaces; returns empty string
 *         if the startIndex is >= the size of the array
 */
string arrayForwardsAsString (int array[], unsigned int startIndex, unsigned int size);

/*
 * Produce a string containing the contents of an array, separated by single spaces, 
 * starting at a specified index and going backward to the beginning of the array, using a recursive 
 * algorithm. The returned string will contain an extra space character after the last value added.
 * @param array an integer array containing the values to be added to the string
 * @param startIndex an integer containing the index of the first value in the array to be added
 *        to the output string
 * @param size an unsigned integer containing the number of elements in the array
 * @return a string containing the contents of the array, separated by spaces, in reverse order; returns empty string
 *         if the startIndex is < zero
 */
string arrayBackwardsAsString (int array[], int startIndex, unsigned int size);


unsigned int factorial (unsigned int value) {
    if (value == 0) {
        return 1; 
    } else {
      return value * factorial(value - 1); 
    }
}

unsigned int fibonacci (unsigned int fibValue) {
    if (fibValue <= 0) {
        return 0;
    } else if (fibValue == 1) {
        return 1;
    } else {
        return fibonacci(fibValue - 1) + fibonacci(fibValue - 2); 
    }
}

bool wordIsPalindrome (string word) {
    if (word.length() <= 1) {
        return true;
    }
    return (word[0] == word[word.length() - 1] && wordIsPalindrome(word.substr(1,word.length() - 2)));
    
}

string arrayForwardsAsString (int array[], unsigned int startIndex, unsigned int size) {
    if (startIndex < 0) {
        return "";
    } else if (startIndex <= size) {
        string temp = startIndex + " " + arrayForwardsAsString(array, startIndex+1, size);
        return temp;
    }
}


string arrayBackwardsAsString (int array[], int startIndex, unsigned int size) {
    
}


TEST_CASE("recursive factorial function") {
	CHECK(factorial(0) == 1);
	CHECK(factorial(1) == 1);
	CHECK(factorial(2) == 2);
	CHECK(factorial(5) == 120);
}

TEST_CASE("recursive fibonacci function") {
	CHECK(fibonacci(1) == 1);
	CHECK(fibonacci(2) == 1);
	CHECK(fibonacci(3) == 2);
	CHECK(fibonacci(15) == 610);
}

TEST_CASE("recursive wordIsPalindrome function") {
	CHECK(wordIsPalindrome("") == true);
	CHECK(wordIsPalindrome("a") == true);
	CHECK(wordIsPalindrome("sitonapotatopanotis") == true);
	CHECK(wordIsPalindrome("baseball") == false);
}

TEST_CASE("recursive array to string functions") {
	int numbers[5] = {5, 10, 15, 20, 25};

	SECTION("recursive array forwards as string function") {
		CHECK(arrayForwardsAsString(numbers, 0, 5) == "5 10 15 20 25 ");
		CHECK(arrayForwardsAsString(numbers, 3, 5) == "20 25 ");
	}

	SECTION("recursive array forwards as string function") {
		CHECK(arrayForwardsAsString(numbers, 5, 5) == "");
		CHECK(arrayBackwardsAsString(numbers, 4, 5) == "25 20 15 10 5 ");
		CHECK(arrayBackwardsAsString(numbers, 1, 5) == "10 5 ");
		CHECK(arrayBackwardsAsString(numbers, -1, 5) == "");
	}
}
