#include <stdlib.h>
#include <time.h>
#include <stdio.h>
 /*main - assign a random number to  variable n each time it's executed
  *return - always 0
 */

int main(void)

{
	int n;
	int xy;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	xy = n % 10;
	if (xy > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, xy);
	}
	else if (xy == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, xy);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, xy);
	}

	return (0);

