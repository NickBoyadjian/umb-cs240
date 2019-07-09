// Nick Boyadjian
// CS240
// Homework 2

// Imports
#include <stdio.h>
#include <ctype.h>

// Constants
#define IN 1
#define OUT 0
#define WORD_LENGTH_ARR_SIZE 27

/* 
	This function loops through the input file and increments
	values in the corresponding array
*/
void countWords(int arr[]) 
{
	int c; // Current character
	int lengthOfCurrentWord = 0; // this will increment until a new word starts

	while ((c = getchar()) != EOF) 
	{
		/* 
			if the current character isnt alphanumeric,
			we reset length and increment array,
			otherwise increment length
		*/
		if (!isalpha(c) && !isdigit(c))
		{
			if (lengthOfCurrentWord != 0)
				arr[lengthOfCurrentWord-1]++;
			lengthOfCurrentWord = 0;
		}
		else
			lengthOfCurrentWord++;
	}
}

// Returns an integer array of all 0's
int * initializeIntArray() 
{
	static int arr[WORD_LENGTH_ARR_SIZE];
	for (int i = 0; i < WORD_LENGTH_ARR_SIZE; ++i)
	{
		arr[i] = 0;
	}
	return arr;
}

// calculates the number of stars a word needs
int getNumberOfStars(int num) {
	if (num <= 4000 && num > 0) // if the count is between 1 and 4000 return 1
		return 1;
	if (num > 4000 ) // if its greater than 4000 return the divisbility
		return (num / 4000 + 1);
	return 0; // otherwise return 0
}

// prints the array with count and asterisks
void printIntArray(int arr[]) 
{
	for (int i = 0; i < WORD_LENGTH_ARR_SIZE; ++i)
	{
		printf("%2d %6d ", (i+1), arr[i]);
		for (int j = 0; j < getNumberOfStars(arr[i]); ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(void)
{
	/* 
		Create an array of 27 0's
		This will store the number of occurences of each word length
	*/
	int *wordLengths = initializeIntArray();

	/*
		This function will go through the file and increment one of the
		values in the wordLengths array after each word
	*/
	countWords(wordLengths);

	// Now we just print the results
	printIntArray(wordLengths);
}
