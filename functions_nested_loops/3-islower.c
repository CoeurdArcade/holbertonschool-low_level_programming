#include "main.h"
#include "stdio.h"

/**
 * _islower -  checks for lowercase character
 */

int _islower(int c)
{
/*
 * This function checks if the input character is a lowercase letter
 */
	return (c >= 'a' && c <= 'z');
}
