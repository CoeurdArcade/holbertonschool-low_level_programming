#include "main.h"
#include "stdio.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * @i: check hour value
 * @j: check minute value
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	/* loop through all hours of the day */
	for (i = 0; i < 24; i++)
	{

	/* loop through all minutes of each hour */
	for (j = 0; j < 60; j++)
	{
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
	_putchar(':');
	_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	_putchar('\n');
	}
	}
}
