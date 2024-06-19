#include "main.h"
#include "stdio.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Returns: 1 if the character is lowercase, otherwise 0
 */

int _islower(int c)
{

	return (c >= 'a' && c <= 'z');
}
