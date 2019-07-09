#include <stdio.h>

int a(int m, int n)
{
	if (m == 0) return 1;
	if (m == 1 && n == 0) return 2;
	if (m > 1 && n == 0) return m + 2;
	return a(a(m-1, n), n-1);
}


int main(void)
{
	printf("%d\n", a(3,4));
	return 0;
}
