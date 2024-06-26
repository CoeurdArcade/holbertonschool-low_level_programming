#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Return: elements of an array integers
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
	if (e == 0)
	printf("%d", a[e]);
	else
	printf(", %d", a[e]);
	}
	printf("\n");
}
