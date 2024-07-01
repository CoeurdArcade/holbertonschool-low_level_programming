#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @sobis: search occurence bytes in string
 * @scoblf: string containing occurence bytes to look for
 * iicis for index and iteration characters of first string
 * iicss for index and iteration characters of second string
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *sobis, char *scoblf)
{
	int iicis, iicss;

	for (iicis = 0; *sobis != '\0'; iicis++)
	{
		for (iicss = 0; scoblf[iicss] != '\0'; iicss++)
		{
		if (*sobis == scoblf[iicss])
		{
		return (sobis);
		}
		}
		sobis++;
	}

	return (NULL);
}
