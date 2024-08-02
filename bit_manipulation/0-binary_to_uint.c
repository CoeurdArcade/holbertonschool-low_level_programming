#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	size_t len = strlen(b);
	char *endptr;

	if (b == NULL)
	{
		return 0;
	}

	for (size_t i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return 0;
		}
	}

	result = strtoul(b, &endptr, 2);

	if (*endptr != '\0')
	{
		return 0;
	}

	return result;
}
