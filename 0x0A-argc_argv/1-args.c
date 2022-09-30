#include "main.h"

/**
 * main - a function that prints the arguments that are passed to it
 *
 * @argc: counts the arguments passed
 * @argv: prints the arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{

	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
