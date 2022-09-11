#include <stdio.h>
#include <unistd.h>
/**
* main - prints all possible combinations of two two-digit numbers
*
* Description: a program that prints all possible combinations
* of two two-digit numbers.The numbers ranges from 0 to 99
* The two numbers are separated by a space
* All numbers are printed with two digits. 1 should be printed as 01
* The combination of numbers are separated by comma, followed by a space
* The combinations of numbers are printed in ascending order
*
* Return: 0
*/
int main(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
				if (((y + z) > (w + x) && y >= w) || w < y)
				{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);

					if (w + x + y + z == 35 && w == '9')
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
