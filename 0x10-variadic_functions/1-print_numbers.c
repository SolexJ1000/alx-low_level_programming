#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed to it as parameters
 *
 * @seperator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *@...: other parameters
 *
 * Return: the printed numbers
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list ch;
	unsigned int i;
	int numbs;

	va_start(ch, n);
	for (i = 0; i < n; i++)
	{
		numbs = va_arg(ch, int);
		printf("%d", numbs);
		if (seperator == NULL)
		{
			continue;
		}
		if (i < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(ch);
}
