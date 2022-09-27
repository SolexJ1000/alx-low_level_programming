#include "main.h"
/**
* char *_memcpy - a function that copies memory area
*
* @dest: The memory address where the memory is copied to
* @scr: The memory address where the memory is copied from
* n: The number of bytes to be copied
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while(i < n)
	{
		i++;
		dest[i] = src[i];
	}
	return (dest);
}
