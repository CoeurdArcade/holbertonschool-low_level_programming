#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - a function that prints numbers
 *
 *Result: Do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
		_putchar(i + '0');
		}
	}

	_putchar('\n');
}
