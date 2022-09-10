#include <stdio.h>
/**
* main - Prints letters of the alphabets on reverse order
*
* Description: This is a program that prints letters of the
* alphabets in reverse order
*
* Return: Always 0
*/
int main(void)
{
	int b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');
	return (0);
}
