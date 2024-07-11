#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that duplicates string given as parameter
 * @str: string parameter
 * cvi is for character value iteration
 * lsi is for lenght string iteration
 *
 * Return: pointer to the copied string , NULL for Error
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int cvi, lsi;

	cvi = 0;
	lsi = 0;

	if (str == NULL)
	return (NULL);

	while (str[lsi])
	lsi++;

	dup = malloc(sizeof(char) * (lsi + 1));

	if (dup == NULL)
	return (NULL);

	while ((dup[cvi] = str[cvi]) != '\0')
	cvi++;

	return (dup);
}
