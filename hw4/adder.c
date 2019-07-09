/*
 * implement fullAdderSum() fullAdderCarry()
 *
 * project: hw4
 * name: 
 * user??
 * date: 
 * file: adder.c
 * pseudo code:
 * notes:
 */

#include "adder.h"

/*
 * add two bits P and Q
 * return the sum bit
 */
enum bits halfAdderSum(enum bits P, enum bits Q)
{
  return P ^ Q; // Returns 1 if they are different and 0 if they are the same
}

/*
 * add two bits P and Q
 * return the carry bit
 */
enum bits halfAdderCarry(enum bits P, enum bits Q)
{
  return P & Q; // return 1 only if both bits are 1
}

/*
 * add three bits P, Q, and Cin
 * return the sum bit
 */
enum bits fullAdderSum(enum bits P, enum bits Q, enum bits Cin)
{
	return halfAdderSum(P, Q) ^ Cin;
}

/*
 * add three bits P, Q, and Cin
 * return the carry bit
 */
enum bits fullAdderCarry(enum bits P, enum bits Q, enum bits Cin)
{
	return P&Q || P&Cin || Q&Cin;
}
