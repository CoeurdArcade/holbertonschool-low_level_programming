#include "main.h"
#include <stdio.h>

/**
 *print_numbers - a function that prints the numbers
 *@i: numbers from 0 to 9
 *
 *Result: numbers printed followed by a new line
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
