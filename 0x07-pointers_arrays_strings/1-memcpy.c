#include "main.h"
/**
* char *_memcpy - a function that copies memory area
*
* @dest: The memory address where the memory is copied to
* @src: The memory address where the memory is copied from
* @n: The number of bytes to be copied
*
* Return: The memroy address of the copied location
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char  *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
