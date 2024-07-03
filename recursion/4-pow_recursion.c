#include "main.h"

/**
 * _pow_recursion - function uses the value integer raised by
 * power of another value integer
 * @ivr: integer value to raise
 * @iprr: integer power recursion raise
 *
 * Return: value result from the recursion power
 */
int _pow_recursion(int ivr, int iprr)
{
	if (iprr < 0)
		return (-1);
	if (iprr == 0)
		return (1);
	return (ivr * _pow_recursion(ivr, iprr - 1));
}
