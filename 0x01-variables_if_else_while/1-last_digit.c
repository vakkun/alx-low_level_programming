#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lD = n % 10;
	if (lD > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lD);
	} else if (lD < 6 && lD != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lD);
	} else 
	{
		printf("Last digit of %d is %d and is 0\n", n, lD);
	}
	return (0);
}
