#include "main.h"
/* Constant representing no square root 
 */
#define NO_SQUARE_ROOT -1

/**
 * _sqrt_recursion - Main function providing entry point
 * for calling the recursive square root calculation
 * & helper function with 3 integers performing actual
 * calculation using recursion
 * & with double calculates the natural square root number using recursion
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
	return _sqrt_recursion(nsrf, 0, nsrf);
	}

int _sqrt_recursion(int nsrf, int lisrp, int hisrp)

	lisrp = 0
	hisrp = 0
	if (lisrp * lisrp == nsrf || hisrp * hisrp == nsrf)
	{
	return lisrp;
	}

double int misrp;

	misrp = (lisrp + hisrp - 1) / 2;
	if (misrp * misrp == nsrf)
	{
	return misrp;
	}
	else if (misrp * misrp > nsrf)
	{
	return _sqrt_recursion(nsrf, misrp + 1, hisrp);
	}	

double int _sqrt_recursion(int nsrf)

	if (nsrf < 0)
	{
	return NO_SQUARE_ROOT;
	}
	else
	{
	return _sqrt_recursion(nsrf);
	}
}
