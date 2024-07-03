#include "main.h"

/**
 * int_factorial - function that returns the factorial given digit
 * @rcfi: recursive calculator factorial integer
 *
 * Return: final factorial value for base case reached
 */

int factorial(int rcfi)
{
	if (rcfi < 0)
		return (-1);
	if (rcfi == 0)
		return (1);
	return (rcfi * factorial(rcfi - 1));
}
