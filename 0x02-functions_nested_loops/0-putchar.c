#include <unistd.h>
#include "main.h"
/**
* main - program that prints _putchar
* Description: This program that prints _putchar foolowed
* by a new line
* Return: 0 Always
*/
int main(void)
{
	char word[8] = "_putchar";
	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(word[a]);
	}
	_putchar('\n');

	return (0);
}
