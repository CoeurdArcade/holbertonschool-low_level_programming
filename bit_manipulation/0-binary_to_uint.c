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
	unsigned int total = 0;
	unsigned int power = 1;

	if (b == NULL)
		return (0);

	/* Move to the end of the string */
	while (*b != '\0')
		b++;

	/* Move back one step to process the last character */
	b--;

	/* Validate and convert in a single loop */
	while (b >= b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		if (*b == '1')
			total += power;

		power *= 2;
		b--;
	}

	return (total);
}
