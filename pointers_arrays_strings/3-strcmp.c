#include "main.h"

/**
 * _strcmp - compares two strings
 * @spcaa1: first string pointer character as argument
 * @spcaa2: second string pointer character as argument
 *
 * Return: 0 if spcaa1 and spcaa2 equal NULL, or spcaa1 equal NULL
 * *spcaa1 - *spcaa2 keeps comparaison
 *
 */

int _strcmp(char *spcaa1, char *spcaa2)
{
	while (*spcaa1 == *spcaa2)
	{
	if (*spcaa1 == '\0')
	{
	return (0);
	}
	spcaa1++;
	spcaa2++;
	}
	return (*spcaa1 - *spcaa2);
}
