#include <stdio.h>
#define max(A, B) ((A) > (B) ? (A) : (B))
#define max3(A, B, C) (max(max(A, B), C))

int main(void)
{
	printf("%d\n", max3(20,50,3));	
}


