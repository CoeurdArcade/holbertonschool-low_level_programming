#include "main.h"
#include <stdio.h>

/**
 * i_isupper(int c) is a function that check for uppercase character
 * @c: the character to check
 *
 * Return: 1 if c is uppercase
 * 	0 otherwise
 */

int main (void)

{
	char c;
	{
	c = 'A';
	printf("%c: %d\n", c, (>= 'A' && <= 'Z'));
	c = 'a';
	printf("%c: %d\n", c, (>= 'a' && <= 'z)');
	}

	return (0);
}
