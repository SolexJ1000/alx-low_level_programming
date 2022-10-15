#include "variadic_functions.h"

/**
 * sum_them_all - A function that summ all the integers of its parameter
 *
 * @n: number of parameters
 * @...: other parameters
 *
 * Return: The list of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ch;
	unsigned int i;
	int add = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(ch, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(ch, int);
	}
	va_end(ch);
	return (add);
}
