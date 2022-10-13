#include "function_pointers.h"

/**
 * print_name - prints the name of the user passed in a function that
 * it calls
 *
 * @name: The name of the user
 * @f: a function that prints the name of the user
 *
 * Return: nothing
 */
void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
