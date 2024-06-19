#include "main.h"
#include "stdio.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)

{
	int i, j, k;
	if (n >= 0 && n <= 15)
	{
	for (i = 0; i <= n; i++)
	{
	for (j = 0; j <= n; j++)
	{
	k = j * i;
	if (j == 0)
	{
	_putchar(k + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	if (k < 10)
	{
	_putchar(',');
	_putchar(' ');
	}
	else if (k >= 10 && k < 100)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
	}
}
