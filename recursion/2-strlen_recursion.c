#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @civpa: chase integer value character argument pointer array
 *
 * Return: length of the interger value
 */

int _strlen_recursion(char *civpa)
{
	if (*civpa == '\0')
		return (0);
	return (1 + _strlen_recursion(civpa + 1));
}
