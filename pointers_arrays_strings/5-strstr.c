#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @lsts: large string to search
 * @lstlf: location substring to look for
 * ic for iteration character on lsts
 * icc for iteration comparaison character on lstlf
 *
 * Return: pointer to first character on matched substring in string
 */

char *_strstr(char *lsts, char *lstlf)
{
	int ic, icc;

	for (ic = 0; lsts[ic] != '\0'; ic++)
	{
		for (icc = 0; lstlf[icc] != '\0'; icc++)
		{
		if (lsts[ic + icc] != lstlf[icc])
		break;
		}
		if (!lstlf[icc])
		return (&lsts[ic]);
	}
	return (NULL);
}
