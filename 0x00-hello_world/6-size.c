#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of a Char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of an int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of a long long int is: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);	
}
