 #include "main.h"

/**
 * **alloc_grid - a function that returns a pointer to a 2 dimensional array
 *
 * @width: The number of rows
 * @height: The number of columns
 *
 * Return: returns the pointer to the 2D array
 * and NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **size;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	size = malloc(sizeof(int *) * width);
	if (size == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		size[i] = malloc(sizeof(int) * height);
		if (size[i] == NULL)
		{
			while (i >= 0)
			{
				free(size[i]);
				i--;
			}
			free(size);
			return (NULL);
		}
	}

	for (j = 0; j < width; j++)
	{
		for (k = 0; k < height; k++)
		{
			size[j][k] = 0;
		}
	}
	return (size);
}
