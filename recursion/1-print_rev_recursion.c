#include "main.h"

/**
 * _print_rev_recursion - recursion function prints a string in reverse order
 * @svfpac: search valid first pointer argument character
 */

void _print_rev_recursion(char *svfpac)
{
	if (*svfpac)
	{
	_print_rev_recursion(svfpac + 1);
	_putchar(*svfpac);
	}
}
