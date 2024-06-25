#include "main.h"
#include <stdio.h>

/**
 * main  - a program that prints the numbers from 1 to 100
 *
 * Result: prints of numbers,
 *	Fizz for multiples of 3,
 *	Buzz for multiples of 5,
 *	FizzBuzz for multiples of 3 and 5,
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
		printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
		printf(" Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
		printf(" FizzBuzz");
		}
		else if (i == 1)
		{
		printf("%d", i);
		}
		else
		{
		printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
