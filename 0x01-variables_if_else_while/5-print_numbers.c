#include <stdio.h>
/**
* main - Prints sigle digits of numbers in base 10
*
* Description: A progrma that prints single digits of numbers
* in base 10 followed by a new line
*
* Return: Always 0
*/
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
