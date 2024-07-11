#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @ivckr: integer value character keeper representation
 * pfboac is for pointer first bit of array characters
 * dilciaacv is for dynamic integer loop counter index and allocator
 * character value
 *
 * Return: pointer to the array for dynamic memory allocation when
 * reading input from file or user, or pointer to temporary data
 * structures for processing
 */ 

char *create_array(unsigned int size, char ivckr)
{
	char *pfboac;
	unsigned int dilciaacv = 0;

	if (size == 0)
	return (NULL);

	pfboac = (char *) malloc(sizeof(char) * size);

	if (pfboac == NULL)
	return (0);

	while (dilciaacv < size)
	{
	*(pfboac + dilcisaacv) = ivckr;
	dilcisaacv++;
	}

	*(pfboac + dilcisaacv) = '\0';

	return (pfboac);
}
