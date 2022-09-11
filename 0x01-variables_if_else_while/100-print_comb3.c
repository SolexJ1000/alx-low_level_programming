#include <stdio.h>
/**
* main - prints all possible different combinations of two digits
*
* Description: a program that prints all possible different
* combinations of two digits seperated by comma
*
* Return: 0
*/
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
