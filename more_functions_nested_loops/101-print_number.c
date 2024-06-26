#include "main.h"

/**
 * print_number - prints an integer using only _putchar function
 * @n: the number to print
 */

void print_number(int n)
{
	if (n == INT_MIN)
	{
	_putchar('-');
	_putchar((~(unsigned int)n + 1) >> 32);
	n = ~n + 1;
	}

	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}

	if (n / 10 != 0)
	print_number(n / 10);

	_putchar(n % 10 + '0');
}
