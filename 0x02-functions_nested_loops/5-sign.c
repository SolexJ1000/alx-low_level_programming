#include "main.h"
/**
* print_sign - a function that prints the sign of a number.
*
* @n: The number to be printed
*
* Description: a function that prints the sign of a number.
*
* Return: 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero
*/
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	return (value);
}
