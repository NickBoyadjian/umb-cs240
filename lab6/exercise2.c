// Print first N prime numbers 

#include <stdio.h>

int main(void) 
{
	int n, count, c;
	scanf("%d", &n);
	int i = 3;
	if (n >= 1)
		printf("2 ");

	for (count = 2; count <= n; i++)
	{
		for (c = 2; c < i; c++)
		{	
			if (i % c == 0) { break; }
		}
		if (c == i) 
		{
			printf("%d ", i);
			count++;
		}		
	}
	printf("\n");
}
