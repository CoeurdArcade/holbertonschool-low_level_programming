#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - a program that prints the numbers from 1 to 100
 * @Fizz: multiples of three
 * @Buzz: multiples of five
 * @FizzBuzz: multiples of three and five
 *
 * Result: prints of numbers, Fizz, Buzz, and FizzBuzz
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
