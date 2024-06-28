#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * is1 first input string
 * is2 second input string
 *
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int is1, is2;

	is1 = 0;
	is2 = 0;

	while (dest[is1] != '\0')
	is1++;

	while (src[is2] != '\0')
	{
	dest[is1] = src[is2];
	is2++;
	is1++;
	}

	dest[is1] = '\0';

	return (dest);
}
