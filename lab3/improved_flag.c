/* 
 *	Nick Boyadjian
 *	Lab 3
 *	17/6/19
 * */

#include <stdio.h>

unsigned char bitPos[8];
int main(void)
{
	int i, state = 44; /* 0010 1100 */
	char n = '\xA5';   /* 1010 0101 */
	char mask = '\x1F';/* 0001 1111 */
	n = n & mask;

	
	bitPos[0] = 1;
	for (i = 1; i < 8; i++)
		bitPos[i]bitPos = bitPos[i - 1] << 1;
	for (i = 0; i < 8; i++)
		if (state & bitPos[i])
			printf("Flag %d is set\n", i + 1);
	return 0;
}
