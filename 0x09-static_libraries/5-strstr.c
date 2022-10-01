#include "main.h"

/**
* _strstr -  a function that locates a substring.
*
* @haystack: an input string to search in
* @needle: an input string to locate into string haystack
*
* Return:  a pointer to the beginning of the located substring,
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{

	int i;
	int s = 0;

	while (needdle[s] != '\0')
	{
		s++;
	while (*haystack)
	{
		for (i=0; neddle[i]; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
			return (haystack);
	}
	}
	return (NULL);
}
