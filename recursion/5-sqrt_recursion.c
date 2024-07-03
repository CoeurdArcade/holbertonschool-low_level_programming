#include "main.h"
/* Constant representing no square root 
 */
#define NO_SQUARE_ROOT -1

/**
 * _sqrt_recursion - Main function providing entry point
 * for calling the recursive square root calculation
 * @nsrf: number square root to find
 *
 * Return: natural square root of nsrf or NO_SQUARE_ROOT
 */

int _sqrt_recursion(int nsrf)
{
	return actual_sqrt_recursion(nsrf, 0);
}

/**
 * actual_sqrt_recursion - helper function performing actual
 * calculation using recursion
 * @nsrf: number square root to find
 * @isrp: iteration square root path
 *
 * Return: square root path guess if perfect square or
 * keeps recursing with new guess
 */

static int actual_sqrt_recursion(int nsrf, int isrp)
{
	int square = isrp * isrp;
	if (square == nsrf || square > nsrf)
	{
	return ((square == n) ? isrp : NO_SQUARE_ROOT):
	}
	else
	{
	return actual_sqrt_recursion(nsrf, isrp + 1);
	}
}

/**
 * sqrt - Calculates the natural square root number using recursion
 * and a inner helper function. This function checks negative inputs 
 * @nsrf: number square root to find
 *
 * Return: square root path
 */

int sqrt(int nsrf)
{
	if (nsrf < 0)
	{
	return NO_SQUARE_ROOT;
	}
	else
	{
	return _sqrt_recursion(nsrf);
	}
}
