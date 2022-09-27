#include "main.h"
/**
* char *_strchr - a function that locates a character in a string
*
* @s: The main string
* @c: The charatcer that indicates where the change will start
*
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
		{
			return (s);
		}
		if (c == '\0')
		{
			return (s);
		}
	}
	return (NULL);
}
