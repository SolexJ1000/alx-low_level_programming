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
	if (p == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (y == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	z = get_op_func(argv[2])(x, y);
	printf("%d\n", z);
	return (0);
}
