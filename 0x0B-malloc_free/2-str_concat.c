#include "main.h"
#include <string.h>

/**
 * *str_concat - a function that concatenates tw strings
 * @s1: the first string to be concatenated
 * @s2: the second string
 *
 * Return: A pointer to the newly allocated space in memory that
 * contains the two strings
 * returns NULL on failure
 * returns an empty sting if NULL is passed
 */
char *str_concat(char *s1, char *s2)
{
	int s1_length;
	int s2_length;
	char *s;
	int size;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_length = strlen(s1);
	s2_length = strlen(s2);
	size = s1_length + s2_length + 1;

	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_length; i++)
	{
		s[i] = s1[i];
	}
	for (i = 0; i < s2_length; i++)
	{
		s[s1_length + i] = s2[i];
	}
	s[size - 1] = '\0';
	return (s);
}
