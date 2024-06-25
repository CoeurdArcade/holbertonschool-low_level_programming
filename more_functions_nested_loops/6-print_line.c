#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line
 * @n: number of times the character should be printed
 *
 * Return: If n is 0 or less, the function only print \n
 */

void print_line(int n)

{
	if (n <= 0)
	{
	_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}

}
