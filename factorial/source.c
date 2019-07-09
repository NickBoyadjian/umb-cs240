#include <stdio.h>

int factorial(int a)
{
	return a < 2 ? 1 : a * factorial(a-1);
}

int main(void)
{
	int res = factorial(5);
	printf("%d\n", res);
}
