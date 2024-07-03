#include "main.h"

/**
 * _puts_recursion - recursive implementation on basic function
 * @cspack: chase single pointer argument character
 */

void _puts_recursion(char *cspack)
{
	if (*cspack == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*cspack);
	_puts_recursion(cspack + 1);
}
