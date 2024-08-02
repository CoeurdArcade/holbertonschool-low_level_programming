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
	const char *p;

	if (b == NULL)
	{
		return 0;
	}

	for (p = b; *p != '\0'; p++)
	{
		if (*p != '0' && *p != '1')
		{
			return 0;
		}
		result = (result << 1) | (*p - '0');
	}

	return result;
}
