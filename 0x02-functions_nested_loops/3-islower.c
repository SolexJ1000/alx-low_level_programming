#include "main.h"
/**
* _islower - function that checks for lowercase character.
*
* @c: The parameter to be entered
*
* Description: A function that checks for lowercase character.
*
* Returns 1 if c is lowercase, Returns 0 otherwise
*
* Return: 1 if number is lowercase and 0 if number is uppercase
*/
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			lower = 1;
		}
	}
	return (lower);
}
