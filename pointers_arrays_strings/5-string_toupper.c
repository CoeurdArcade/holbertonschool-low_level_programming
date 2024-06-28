#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 * ivc is for integer variable character
 *
 * Return: the resulting string modified
 */

char *string_toupper(char *s);
{
	int ivc;

	for (ivc = 0; s[ivc] != '\0'; ivc++)
	{
		if (s[ivc] >= 'a' && s[ivc] <= 'z')
		s[ivc] = s[ivc] - 32;
	}

	return (s);
}
