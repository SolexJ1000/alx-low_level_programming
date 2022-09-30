#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - A function that multiplies two numbers
 *
 * @argc: counts the numbers
 * @argv: multiplies the numbers
 *
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 =  atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}

	return (0);
}
