#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  Assigns a random number to the variable n
*
* Description: Tells if a number is positive or negative
*
* section header: section description
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
