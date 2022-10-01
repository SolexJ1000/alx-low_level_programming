#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a function that adds positive numbers
 *
 * @argc: counts the numbers
 * @argv: prints the numbers
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
			printf("Error\n");
			return (1);
			}
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
