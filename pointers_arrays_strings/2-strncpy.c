#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @nbcc: number of bytes chain to copy
 * iv is for integer variable
 *
 * Return: pointer to the new chain bytes of the string
 */
char *_strncpy(char *dest, char *src, int nbcc)
{
	int iv;

	iv = 0;

	while (src[iv] != '\0' && iv < nbcc)
	{
	dest[iv] = src[iv];
	iv++;
	}

	while (iv < nbcc)
	{
	dest[iv] = '\0';
	iv++;
	}

	return (dest);
}
