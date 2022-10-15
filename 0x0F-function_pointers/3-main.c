#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main  - performs simple operations
 *
 * @argc: counts the arguments
 * @argv: argument vector
 *
 * Return: 0 if successful. 98 if there is an argc error,
 * 99 on illegal operator
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);

	p =  get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = (*p)(x, y);
	printf("%d\n", z);
	return (0);
}
