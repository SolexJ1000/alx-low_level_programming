#include "main.h"
int _sqrt(int, int);

/**
* _sqrt_recursion - a funtion that returns the natural square of a number
*
* @n: The number to be returned
*
* Return: The natural squre of @n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}

/**
* _sqrt - finds the square root
* @n: the number
* @e: the iterrator
*
* Return: The squareroot
*/
int _sqrt(int n, int e)
{
	int square = e * e;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (e);
	}
	else
	{
		return (_sqrt(n, e + 1));
	}
}
