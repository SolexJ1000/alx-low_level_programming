#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two intgers
 *
 * @a: the first integer to be added
 * @b: The second integer to be added
 *
 * Return: the sum of the integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 *
 * @a: the fist integer
 * @b: the second integer to be subtracted
 *
 * Return: the difference between the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 *
 * @a: the first integer
 * @b: the second integer to be multiplied
 *
 * Return: the result of the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  divides two integers
 *
 * @a: the first integer
 * @b: the second integer to be divided
 *
 * Return: the result of the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Errorn\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find the moduus of two integers
 *
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
