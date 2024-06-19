#include "main.h"
#include "stdio.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to check
 * 
 * Return: value 1 prints + if <0
 * value 0 prints 0 if =0
 * value -1 prints - if <0 
 */

int print_sign(int n)
{
	if (n > 0)
	{

	_putchar('+');
	return (1);

	}
	else if (n == 0)
	{

	_putchar(48);
	return (0);

	}
	else /* n < 0 */
	{

	_putchar('-');
	return (-1);
	}
}
