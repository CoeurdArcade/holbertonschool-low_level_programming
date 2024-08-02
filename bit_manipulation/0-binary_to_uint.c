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
	const unsigned char lookup[] = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9};

	if (b == NULL) {
		return 0;
	}

	for (const char *p = b; *p != '\0'; p++) {
		if (*p < '0' || *p > '1') {
			return 0;
		}
		result = (result << 3) | lookup[*p - '0'];
	}

	return result;
}
