/*
 * implementation of counting sort
 *
 * project: hw5
 * name: 
 * user??
 * date: 
 * file: cntSort.c
 * pseudo code: 
 * 		for (data array)
 * 			increment the count at the position of each data value
 *
 * 		for (data array)
 * 			start at 0 in both array, i being the data, j being the count.
 * 			we loop all the way over data, adding the value of j. after each loop we
 * 			decrement the value in count until it hits 0. then we increment j,
 * 			going to the next value in out sequence.
 * notes:
 */

#include <stdlib.h>
#include <stdio.h>

void cntSort(unsigned m, unsigned n, unsigned data[])
{
	unsigned *count; /* result array */

  	/* allocate memory */
  	count = (unsigned *)malloc(sizeof(unsigned) * m);

	/* loop over the data array and increment the values in count */
	for (int i = 0; i < n; i++)
		count[data[i]]++;


	/* sort the values back into data */
	for (int i = 0, j = 0; i < n; i++)
	{
		if (count[j] == 0) ++j;

		data[i] = j;
		count[j] = count[j]-1;
	}
	
  	/* free up memory */
  	free(count);
}

