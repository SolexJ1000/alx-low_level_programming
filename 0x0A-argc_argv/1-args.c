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
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
