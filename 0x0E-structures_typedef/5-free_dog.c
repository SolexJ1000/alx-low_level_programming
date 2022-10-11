#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees structs
 *
 * @d: the second struct
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
