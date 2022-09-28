#include "main.h"
/**
* void _puts_recursion - a function that prints a string
* and a new line
*
* @s: The  input string to print
*
* Description: This function returns a string and a new line
* Return: The string inputed
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
