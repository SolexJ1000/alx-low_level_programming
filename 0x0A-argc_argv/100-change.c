#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exactly
 * or 0 in otherwise
 */
int main(int argc, char **argv)
{
	int cost, coins = 0;

	if (argc == 2)
	{
		cost = atoi(argv[1]);
		if (cost < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (cost % 25 >= 0)
		{
			coins += cost / 25;
			cost = cost % 25;
		}
		if (cost % 10 >= 0)
		{
			coins += cost / 10;
			cost = cost % 10;
		}
		if (cost % 5 >= 0)
		{
			coins += cost / 5;
			cost = cost % 5;
		}
		if (cost % 2 >= 0)
		{
			coins += cost / 2;
			cost = cost % 2;
		}
		if (cost % 1 >= 0)
			coins += cost;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
