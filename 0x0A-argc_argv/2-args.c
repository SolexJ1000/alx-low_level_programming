#include "main.h"

/**
 * main - prints all arguments passed to it including the first one
 * @argc: counts the arguments
 * @argv: prints the arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
