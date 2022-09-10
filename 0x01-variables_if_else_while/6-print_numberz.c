#include <stdio.h>
/**
* main - Aprogram that prints single digits of numbers in baes 10
*
* Description: This is a program that prints single digits of numbers in base 10
* char, printf, puts are not allowed
*
* Return: Always 0
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
