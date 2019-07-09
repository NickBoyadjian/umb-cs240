/*
 * Write code to reverse a c string... solve with pointers
 */

#include <stdio.h>

void reverseString(char input[], char output[], int length); 

int main(void)
{
	char string[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
	char reversed[6];
	reverseString(string, reversed, 6);
	printf("String: %s\n", string);
	printf("Reversed String: %s\n", reversed);
}

void reverseString(char input[], char output[], int length)
{
	int j = length - 2;
	for(int i = 0; i < length - 1; i++)
	{
		output[i] = input[j];
		j--;
	}
	output[length-1] = '\0';
}
