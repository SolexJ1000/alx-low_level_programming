#include "main.h"
/**
* _print_rev_recursion - a function that prints a string in reverse recursively
*
* @s: The string that is printed
*
* Return: The string printed
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
