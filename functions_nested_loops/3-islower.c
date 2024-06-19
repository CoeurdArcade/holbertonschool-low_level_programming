#include "main.h"
#include "stdio.h"

/**
 * _islower - checks for lowercase character
 * member c - check for matches depending on returns
 * return value of _islower - 1 if "c" is lowercase otherwise is 0
 */

int _islower(int c)
{

	return (c >= 'a' && c <= 'z');
}
