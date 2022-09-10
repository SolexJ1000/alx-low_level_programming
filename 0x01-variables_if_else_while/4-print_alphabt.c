#include <stdio.h>
/**
* main -  prints the alphabet in lowercase
*
* Description: a program that prints the alphabet in lowercase
* except letter 'q' and 'e'
*
* Return: Always 0
*/
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
