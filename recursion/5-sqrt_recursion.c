#include "main.h"

/**
 * _sqrt_recursion - Main function providing entry point
 * for calling the recursive square root calculation
 * actual_sqrt_recursion - helper function with double integer
 * performing actual calculation using recursion and
 * calculates the natural square root number using recursion
 * @nsrf: number square root to find
 * @isrp: iteration square root path
 *
 * Return: natural square root of nsrf or -1 for NO_SQUARE_ROOT
 * handles negative inputs by error message
 * & square root path guess if perfect square or
 * keeps recursing with new guess
 * & Negative input check before calling inner helper function
 * and calls the inner helper function with low value of zero and
 * high value equal to argument nsrf. This performs binary search to
 * find the square root
 */

int actual_sqrt_recursion(int nsrf, int isrp);

int _sqrt_recursion(int nsrf)
{
	if (nsrf < 0)
	return (-1);
	return (actual_sqrt_recursion(nsrf, 1));
}

int actual_sqrt_recursion(int nsrf, int isrp)
{
	if (isrp * isrp > nsrf)
	return (-isrp);
	if (isrp * isrp == nsrf)
	return (isrp);
	return (actual_sqrt_recursion(nsrf, isrp + 1));

}
