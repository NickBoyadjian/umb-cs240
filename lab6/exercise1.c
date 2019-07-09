/* Convert days to years, months, and remaining days.
 * assume every month has 30 days
*/

#include <stdio.h>


int main()
{
	int days;
	scanf("%d", &days);
	printf("Years: %d \n", days / 365);
	days -= (365 * (days / 365));
	printf("Months: %d\n", days / 30);
	days -= (30 * (days / 30));
	printf("Days: %d\n", days);
}

