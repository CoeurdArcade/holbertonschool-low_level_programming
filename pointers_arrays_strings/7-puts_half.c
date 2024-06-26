#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: half of string printed
 */

void puts_half(char *str)
{
	int a, b, c;

	a = 0;

	while (str[a] != '\0')
	{
	a++;
	}

	if (a % 2 == 0)
	{
	for (c = a / 2; str[c] != '\0'; c++)
		{
		_putchar(str[i]);
		}
	}
	else if (a % 2)
	{
	for (b = (a - 1) / 2; b < a - 1; b++)
		{
		_putchar(str[b + 1]);
		}
	}
	_putchar('\n');
}
