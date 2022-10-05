#include "main.h"

/**
 * *_strdup - a function that returns a pointer to newly allocated space
 * in memory which contains a copy of the string given as parameter
 *
 * @ str: The pointer string to copy
 *
 * Return: NULL if the string is NULL
 * on success, returns a pointer to the duplicated string
 * retuens NULL if insufficient memory is avalaible
 */
char *_strdup(char *str)
{
	unsigned int a = 0;
	unsigned int b = 0;
	char *string;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[a])
	{
		a++;
	}

	string = malloc(sizeof(char) * (a +1));

	if (string == 0)
	{
		return (NULL);
	}
	while (str[b])
	{
		string[b] = str[b];
		b++;
	}
	string[b + 1] = 0;
	return (string);
}
