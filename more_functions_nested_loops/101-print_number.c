#include "main.h"
#include <limits.h>

/**
 * print_number - a function that prints an integer
 * @n: value to transform
 *
 * Return: an integer
 */

void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10)
	{
	print_number(n / 10);
	}

	_putchar(n % 10 + '0');
}

	int main(void)
	{	
	int numbers[] = {INT_MAX, INT_MIN, 0, 3, -1, 10, -99, 123456789, 1024, -4096};
	int i;

	for (i = 0; i < sizeof(numbers) / sizeof(int); i++)
	{
	print_number(numbers[i]);
	_putchar('\n');
	}

	return (0);
}
