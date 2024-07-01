#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @sts: string to search
 * @ctf: character to find
 * ptfo is for pointer first occurence
 *
 * Return: a pointer to the first occurrence of the ctf
 * in the string sts, or NULL if the character is not found
 */

char *_strchr(char *sts, char ctf)
{
		int ptfo;

		while (1)
		{
		ptfo = *sts++;
		if (ptfo == ctf)
		{
		return (sts - 1);
		}
		if (ptfo == 0)
		{
		return (NULL);
		}
	}
}
