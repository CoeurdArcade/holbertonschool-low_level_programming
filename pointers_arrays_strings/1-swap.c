#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of integers
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * Return: Two integers are swaped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
