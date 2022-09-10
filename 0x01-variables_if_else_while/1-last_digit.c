#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Assigns a random number n each time
*
* Description: This program will print the last 5 digits of the number
* and will tell if its greater than 5
*
* Return: Always 0
*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d\n", n, a);
	}
	else if (a < 6 && !0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
