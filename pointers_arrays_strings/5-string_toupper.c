#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @stm: string to modify
 * ivc is for integer variable character
 *
 * Return: the resulting string modified
 */

char *string_toupper(char *stm)
{
	int ivc;

	for (ivc = 0; stm[ivc] != '\0'; ivc++)
	{
		if (stm[ivc] >= 'a' && stm[ivc] <= 'z')
		stm[ivc] = stm[ivc] - 32;
	}

	return (stm);
}
