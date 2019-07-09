// append to a result array if the length is over 5 and print them all at the end

#include <stdio.h>
#include <string.h>
#define MAXLINE 1024

int get_line(char line[], int maxline);

int main ()
{
	char linesOverMax[MAXLINE]; // collection of all lines over 5
	char line[MAXLINE]; // current line being read
int len;
	while ((len = get_line(line, MAXLINE)) > 0) 
	{
		if (len > 5)
			strcat(linesOverMax, line);
	}

	printf("\nLines over 5:\n%s\n", linesOverMax);
}

// Reads line of input and returns the length of the line
int get_line(char s[], int lim) 
{
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
		if (c == '\n') {
			s[i] = c;
			i++;
	}
	s[i] = '\0';
	return i;
}
