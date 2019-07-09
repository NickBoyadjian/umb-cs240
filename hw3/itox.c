/*
 * functions that convert between int, quaternary, and vigesimal numbers
 * 
 * project: hw3
 * name: Nick Boyadjian 
 * date: 17/6/2109
 * file: itox.c
 * notes:
 */

#include <stdio.h>
#include <string.h>
#include "itox.h"

int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 

/* function converts int n to a quaternary string in the
   hexstring array */
void itoq(char quaternaryStr[], int n)
{
	for (int i = sizeof(int) * 4 - 1; i >= 0; i--)
	{
		quaternaryStr[i] = n % 4 + '0';
		n /= 4;
	}
	quaternaryStr[sizeof(int) * 4] = '\0';
}

/* function converts a quaternary string to its int value  */
int qtoi(char quaternaryStr[])
{
	int res = 0;
	int powerOf = 0;
	for (int i = sizeof(int) * 4 - 1; i > 0; i--)
	{
		res += (quaternaryStr[i] - '0') * power(4, powerOf);
		powerOf++;
	}
	return res;
}

/* function converts int n to a vigesimal string in the
   hexstring array */
void itov(char vigesimalStr[], int n)
{
	for (int i = sizeof(int) * 2 - 1; i >= 0; i--)
	{
		if (n % 20 > 9) {
			vigesimalStr[i] = 'A' + ((n % 20 - 10));
		} else {
			vigesimalStr[i] = n % 20 + '0';
		}
		n /= 20;
	}
	vigesimalStr[sizeof(int) * 2] = '\0';
}
/* function converts a vigesimal string to its int value  */
int vtoi(char vigesimalStr[])
{
	int res = 0;
	int powerOf = 0;
	for (int i = sizeof(int) * 2 - 1; i > 0; i--)
	{
		if (vigesimalStr[i] >= 'A') {
			res += (vigesimalStr[i] - 'A' + 10) * power(20, powerOf);
		} else {
			res += (vigesimalStr[i] - '0') * power(20, powerOf);
		}
		powerOf++;
	}
	return res;
}
