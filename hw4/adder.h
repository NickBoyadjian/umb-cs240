/*
 * declarations
 *
 * project: hw4
 * name: 
 * user??
 * date: 
 * file: adder.h
 */

enum bits {ZERO, ONE};

enum bits halfAdderSum(enum bits P, enum bits Q);
enum bits halfAdderCarry(enum bits P, enum bits Q);

enum bits fullAdderSum(enum bits P, enum bits Q, enum bits Cin);
enum bits fullAdderCarry(enum bits P, enum bits Q, enum bits Cin);

unsigned int myAdd(unsigned int p, unsigned int q);
