#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string in reverse
 * @s: string to be printed
 *
 * Return: String reversed
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
	i++;
	}

	len = i;

	for (j = len - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}

	_putchar('\n');
}
