#include "main.h"
#include <stdio.h>

/**
 * i_isupper(int c) is a function that check for uppercase character
 *
 * Return: 1 if c is uppercase
 * 	0 otherwise
 */

int main (void)

{
	char c;
	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));

	return (0);
}
