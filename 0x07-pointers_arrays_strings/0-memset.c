#include "main.h"
/**
* char *_memset - a function that fills memory with a constant byte
*
* @s: memory address pointed to that will be filled
* @b: The byte that is filled
* @n: The number of bytes to fill
*
* Return: Pointer to location filled
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
