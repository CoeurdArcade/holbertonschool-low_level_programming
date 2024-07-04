#include "main.h"
/* Constant representing no square root 
 */
#define NO_SQUARE_ROOT -1

/**
 * _sqrt_recursion - Main function providing entry point
 * for calling the recursive square root calculation
 * actual_sqrt_recursion - helper function performing actual
 * calculation using recursion
 * sqrt - Calculates the natural square root number using recursion
 * @nsrf: number square root to find
 * @lisrp: low iteration square root path
 * @misrp: mid iteration square root path
 * @hisrp: high iteration square root path
 *
 * Return: natural square root of nsrf or NO_SQUARE_ROOT
 * handles negative inputs by error message
 * & square root path guess if perfect square or
 * keeps recursing with new guess
 * & Negative input check before calling inner helper function
 * and calls the inner helper function with low value of zero and
 * high value equal to argument nsrf. This performs binary search to
 * find the square root
 * 
 */

int _sqrt_recursion(int nsrf)
{
	if (nsrf < 0)
	{
	return NO_SQUARE_ROOT;
	}
	else
	{
	return actual_sqrt_recursion(nsrf, 0, nsrf);
	}
}

int actual_sqrt_recursion(int nsrf, int lisrp, int hisrp)
{
	if (lisrp * lisrp == nsrf || hisrp * hisrp == nsrf)
	{
	return lisrp;
	}

long long int misrp = (lisrp + hisrp - 1) / 2; 

	if (misrp * misrp == nsrf)
	{
	return misrp;
	}
	else if (misrp * misrp > nsrf)
	{
	return actual_sqrt_recursion(nsrf, misrp + 1, hisrp);
	}	
}

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
