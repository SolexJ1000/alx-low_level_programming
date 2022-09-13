#include "main.h"
/**
* _abs - a function that computes the absolute value of an integer
*
* @r: An integer input
*
* Description: a function that computes the absolute value of an integer
*
* Return: Always 0
*/
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else 
	{
		return (r * -1);
	}
}
