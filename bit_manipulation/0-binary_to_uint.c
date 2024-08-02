#include "main.h"
#include <stdio.h>
#include <string.>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	return binary_to_uint_recursive(b, 0);
}

/**
 * binary_to_uint_recursive - recursive helper function to convert binary to uint
 * @b: char string
 * @index: current index
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint_recursive(const char *b, int index)
{
	if (b[index] == '\0')
		return (0);

	if (b[index] != '0' && b[index] != '1')
		return (0);

	unsigned int power = 1 << (strlen(b) - index - 1);
	return (b[index] - '0') * power + binary_to_uint_recursive(b, index + 1);
}
