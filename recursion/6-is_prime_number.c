#include "main.h"

int actual_prime(int nte, int pf);

/**
 * is_prime_number - Main function to determine if
 * an integer is a prime number or not
 * @nte: number to evaluate
 *
 * Return: 1 is a prime number, 0 not and keeps
 * calling recursively each number
 */
int is_prime_number(int nte)
{
	if (nte <= 1)
	return (0);
	return (actual_prime(nte, nte - 1));
}

/**
 * actual_prime - helper function to recursively check
 * divisibility by n-1 wich simplifies the implementation
 * and reduces the number of function calls required
 * @nte: number to evaluate
 * @pf: prime finder
 *
 * Return: Performs a binary check by recursively calling the
 * helper function with updates values to check divisibility
 * from integers betwenn itself and 2 (smallest prime number
 * exclusive)
 */

int actual_prime(int nte, int pf)
{
	if (pf == 1)
	return (1);
	if (nte % pf == 0 && pf > 0)
	return (0);
	return (actual_prime(nte, pf - 1));
}
