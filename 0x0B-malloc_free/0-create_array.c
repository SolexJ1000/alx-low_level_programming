#include "main.h"
/**
 * *create_array - a function thatcreates an array of chars and initializes
 * them with a sigle char
 *
 * @size: the size of the array
 * @c: the character to be initialized
 *
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	i = 0;

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
