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

	printf("The size of a Char is: %hhi byte(s)\n", (char)sizeof(a));
	printf("The size of an int is: %hd byte(s)\n", (int)sizeof(b));
	printf("The size of a long int is: %ld byte(s)\n", (long int)sizeof(c));
	printf("The size of a long long int is: %lld bytes(s)\n", (long long int)sizeof(d));
       	printf("The size of a float is: %f byte(s)\n", (float)sizeof(e));
	return (0);	
}
