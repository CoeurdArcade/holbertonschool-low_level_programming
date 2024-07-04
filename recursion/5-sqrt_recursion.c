#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Main function providing entry point
 * for calling the recursive square root calculation
 * & helper function with 2 integers performing actual
 * calculation using recursion
 * & with double calculates the natural square root number using recursion
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

int actual_sqrt_recursion(int nsrf, int isrt);

int _sqrt_recursion(int nsrf)
{
	if (nsrf < 0)
	return (-1);
	return (actual_sqrt_recursion(nsrf, 0));
}

int actual_sqrt_recursion(int nsrf, int isrt)
{
	if (isrt * isrt > nsrf)
	return (-1);
	if (isrt * isrt == nsrf)
	return (nsrf);
	return (actual_sqrt_recursion(nsrf, isrt + 1));

}
