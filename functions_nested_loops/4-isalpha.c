#include "main.h"
#include "stdio.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: value 1 if c is a letter,lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
