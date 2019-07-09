#include <stdio.h>

void printTable(int x, int y);

int main(int argc, char* argv[])
{
	if (argc == 3)
	{
		printTable(atoi(argv[1]), atoi(argv[2]));
	}
	else
	{
		printf("Please provide two input arguments\n");
	}
}

void printTable(int x, int y)
{
	for (int i = 0; i <= y; i++)
	{
		printf("%d x %d = %d\n", x, i, x*i);
	}
}
