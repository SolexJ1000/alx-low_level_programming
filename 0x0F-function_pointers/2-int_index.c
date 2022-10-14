#include "function_pointers.h"

/**
 * int_index  - a function that searches for an integer
 *
 * @array: the array of integers to be searched
 * @size: the size of the array
 * @cmp: a pointer to a function to be used to compare values
 *
 * Return: the index of the first element of the cmp function
 * -1 if there are no matches and if size <= 0
 */
int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (i == size)
	{
		return (-1);
	}
	return (-1);
}
