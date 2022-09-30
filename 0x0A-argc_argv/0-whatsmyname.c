#include "main.h"

/**
 * main - a program tha prints its name
 *
 * @argc: counts the arguments passed in the function
 * @argv: lists the argument passed
 *
 * Return: Always
 */
int main(int argc, char *argv[])
{
	(void)argc;

	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
