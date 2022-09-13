#include "main.h"
/**
* main - prints the alphabet, in lowercase
*
* Description: a function that prints the alphabet, in lowercase,
* followed by a new line
*
* Return: 0 Always
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
