#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get-op_func -  a function that selecste the corect function to perform
 * operation asked by the user
 *
 * @s: operator passed as an argument to the program
 *
 * Return: a pointer to the operation that corresponds to the operation given
 * as parameter
 * returns NULL if there are no matches
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
