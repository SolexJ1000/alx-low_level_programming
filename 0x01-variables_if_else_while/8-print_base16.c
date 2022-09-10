#include <stdio.h>
/**
* main - Prints all the digits of base 16 system
*
* Description: Aprogram that prints all the numbers of
* base 16 in lowercase, followed by a new line
*
* Return: Always 0
*/
int main(void)
{
	int a = 0;
	char ch = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
