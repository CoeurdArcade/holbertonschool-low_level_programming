#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @nbc: number of bytes of the chain str to concatenate
 *
 * Return: a pointer of the new chain byte str destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int iv1, iv2;

	iv1 = 0;
	iv2 = 0;

	while (dest[iv1] != '\0')
	iv1++;

	while (src[iv2] != '\0' && iv2 < nbc)
	{
	dest[iv1] = src[iv2];
	iv1++;
	iv2++;
	}

	dest[iv1] = '\0';

	return (dest);
}
