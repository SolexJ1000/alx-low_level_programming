#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a variable type
 *
 * @d: the structure to initialize
 * @name: the name of the dog
 * @owner: The name of the dog's owner
 * @age: the age of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
