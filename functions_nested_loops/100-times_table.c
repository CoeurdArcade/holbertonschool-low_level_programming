#include "main.h"
#include "stdio.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 *
 * Return: nothing if n > 15 or n < 0
 */

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	int k = i * j;

	_putchar(k % 10 + '0');
	if (j != n)
	{
	_putchar(',');
	_putchar(' ');
	}
	else if (k < 100)
	{
	_putchar(' ');
	}
	else if (k >= 10 && k < 100)
	_putchar((k / 10) + '0');
	else
	_putchar((k / 100) + '0');
	_putchar((k % 10) + '0');
	}
	}

	_putchar('\n');
	}
	}
}
