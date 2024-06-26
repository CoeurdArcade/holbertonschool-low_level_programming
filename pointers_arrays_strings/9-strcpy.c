#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int cs, cd;

	cs = 0;

	while (src[cs] != '\0')
	{
	cs++;
	}

	for (cd = 0; cd < cs; cd++)
	{
	dest[cd] = src[cd];
	}
	dest[cd] = '\0';

	return (dest);
}
