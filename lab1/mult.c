#include <stdio.h>

#define min 1
#define max 10
#define multiple 5

int main(void)
{
  for(int i = min; i <= max; i++)
  {
    printf("%d times %d = %d \n", i, multiple, (i*multiple));
  }
}
