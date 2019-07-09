/*
 * implement of myAdd() using fullAdderSum() and fullAdderCarry()
 *
 * project: hw4
 * name: 
 * user??
 * date: 
 * file: myAdd.c
 * pseudo code:
 * notes:
 */

#include <stdio.h>
#include <stdlib.h>
#include "adder.h"

unsigned int getBitAt(unsigned int num, int i)
{
	return (num & (1 << i)) >> i;
}

unsigned int setBitAt(unsigned int res, int i, int value)
{
	return value == 1 ? res | (1 << i) : res & ~(1 << i);
}

/*
 * use fullAdderSum() and fullAdderCarry() to add two numbers bit by bit
 * p and q are nonnegative
 * assume their sum does not cause overflow of a 32-bit unsigned int
 */
unsigned int myAdd(unsigned int p, unsigned int q)
{
  unsigned int mySum = 0;

  /*
   * loop 32 times
   * add a pair of bits from p and q, and the previous carry bit
   * record the sum bit in the corresponding bit in mySum
   * the first carry bit is zero
   * the last carry bit is discarded, assuming no overflow
   */
	unsigned int cin = 0; 
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		// extract i'th bit form p and q
		unsigned int bitFromP = getBitAt(p, i);
		unsigned int bitFromQ = getBitAt(q, i);
		
		//calculate sum and carry
		sum = fullAdderSum(bitFromP, bitFromQ, cin);
		unsigned int cout = fullAdderCarry(bitFromP, bitFromQ, cin);
		
		// write sum to to i'th bit of mySum
		mySum = setBitAt(mySum, i, sum);

		// move cout to cin
		cin = cout;

	}


  return mySum;
}















