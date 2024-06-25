#include "main.h"
#include <stdio.h>

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * @#: output character for a triangle
 *
 * Returns: if size is 0 or less, prints a new line,
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for ((j = size - i); j > 0; j--)
	{
	_putchar(' ');
	}
	for (j= 0; j < i; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
