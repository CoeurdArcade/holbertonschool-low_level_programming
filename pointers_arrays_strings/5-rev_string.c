#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: string to be reversed
 *
 *Return: string reversed
 */

void rev_string(char *s)
{
	char tmp;
	int a, b, c;

	b = 0;
	c = 0;

	while (s[b] != '\0')
	{
	b++;
	}

	c = b - 1;

	for (a = 0; a < b / 2; a++)
	{
	tmp = s[a];
	s[a] = s[c];
	s[c--] = tmp;
	}
}
