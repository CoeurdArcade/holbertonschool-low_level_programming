#include "main.h"
#include <stdio.h>

/**
 * print_square - function that prints a square
 * @size: size of the square
 * @#: character for print square
 *
 * Returns: if size is 0 or less, function print only a new line
 */

void print_square(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
		else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
		for (j = 0; j < size; j++)
		{
		_putchar('#');
		}
		_putchar('\n');
		}
	}
}
