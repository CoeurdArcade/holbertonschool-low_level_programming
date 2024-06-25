#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: if n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n);

int n, i;
{
        if (n <= 0)
        {
        _putchar('\n');
        }

        else
        {
                int i;

                for (i = 1; i <= n; i++)
                {
                _putchar('\\');
                }
                _putchar('\n');
        }

}
