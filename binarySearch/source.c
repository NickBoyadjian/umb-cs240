#include <stdio.h>

int main(void)
{
	int arr[8] = {5, 10, 15, 20, 25, 30, 35, 40};
	printf("at index: %d\n", binarySearch(20, arr, 8));
}

int binarySearch(int x, int v[],  int n)
{
	int low = 0, high, mid;

	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid]) 
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
