#include <stdio.h>
/**
* main - Prints all possible combination of single digit numbers
*
* Description: a program that prints all possible combinations
* of single-digit numbers.
*
* REturn: Always 0
*/
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
