#include "function_pointers"

/**
 * print_elem - prints an integer
 *
 * @elem: theinteger to print
 *
 * Return: nothing
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer in hexadeimal
 *
 * @elem: the integer to print
 *
 *Return: nothing
 */
void print_elem_hex(int elem)
{
	printf("0x%x\n", elem);
}

/**
 * main - prints other function
 *
 * Return: Always 0
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	array_iterator(array, 5, &print_elem_hex);
	return (0);
}
