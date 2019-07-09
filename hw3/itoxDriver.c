/*
 * stub driver for functions convert between int, quaternary, and
 * vigesimal number
 *
 * project: hw3
 * name: Nick Boyadjian 
 * date: 17/6/19
 * file: itoxDriver.c
 * notes:
 */

#include <stdio.h>
#include <string.h>
#include "itox.h"

#define LINE_LENGTH    1024                  // Length of each input line
#define QUATERNARY     (sizeof(int) * 4 + 1) // Length of quaternary string
#define VIGESIMAL      (sizeof(int) * 2 + 1) // Length of vigesimal string

int main(void)
{
  char quaternaryStr[QUATERNARY];
  char vigesimalStr[VIGESIMAL];
  char line[LINE_LENGTH];
  int m, n;

  /*write a loop here
   * use fgets(line, LINELEN, stdin) to read from keyboard
   * stop the loop if EOF
   * use sscanf(line, "%d", &n) to convert input to int n
   */

  while(fgets(line, LINE_LENGTH, stdin))
  {
    sscanf(line, "%d", &n);
    printf("n = %d\n", n);
    itoq(quaternaryStr, n);
    m = qtoi(quaternaryStr);
    printf("input decimal int: %d\n", n);
    printf("quaternary representation: %s\n", quaternaryStr);
    printf("reconverted decimal : %d\n", m);
    itov(vigesimalStr, n);
    m = vtoi(vigesimalStr);
    printf("vigesimal representation: %s\n", vigesimalStr);
    printf("reconverted decimal : %d\n\n", m);
  }

  return 0;
}


