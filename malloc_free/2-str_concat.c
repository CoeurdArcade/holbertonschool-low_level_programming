#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @maofces: memory address of first character empty string
 * @maofcs: memory address of first character string
 * iptk is for index position track keeper
 * dmipf is for dynamic mutable iteration pointer fonction
 * liacct is for loop index and character copied tracker
 * ils is for iteration length storage
 * tils is for twin iteration length storage
 *
 * Return: pointer to new string created, or NULL for Error
 */

char *str_concat(char *maofces, char *maofcs)
{
	char *dmipf;
	unsigned int iptk = 0, liacct = 0, ils = 0, tils = 0;

	while (maofces && maofces[ils])
	ils++;
	while (maofcs && maofcs[tils])
	tils++;

	dmipf = malloc(sizeof(char) * (ils + tils + 1));
	if (dmipf == NULL)
	return (NULL);

	iptk = 0;
	liacct = 0;

	if (maofces)
	{
	while (iptk < ils)
	{
		dmipf[iptk] = maofces[iptk];
		iptk++;
		}
	}

	if (maofcs)
	{
		while (iptk < (ils + tils))
		{
		dmipf[iptk] = maofcs[liacct];
		iptk++;
		liacct++;
		}
	}
	dmipf[iptk] = '\0';

	return (dmipf);
}
