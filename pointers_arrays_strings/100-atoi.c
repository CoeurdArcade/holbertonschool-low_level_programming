#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * ktpis is for keep track position input string
 * sfodd is for store flag odd
 * mfiv is for maybe final integer value
 * len is calculates length of input string by iterating through its characters
 * ch is for chain
 * ccid  is checking each character to see if it is a digit
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int ktpis, sfdodd, mfiv, len, ch, ccid;

	ktpis = 0;
	sfdodd = 0;
	mfiv = 0;
	len = 0;
	ch = 0;
	ccid = 0;

	while (s[len] != '\0')
	len++;

	while (ktpis < len && ch == 0)
	{
		if (s[ktpis] == '-')
		++sfdodd;

		if (s[ktpis] >= '0' && s[ktpis] <= '9')
		{
		ccid = s[ktpis] - '0';
		if (sfdodd % 2)
		ccid = -ccid;
		mfiv = mfiv * 10 + ccid;
		ch = 1;
		if (s[ktpis + 1] < '0' || s[ktpis + 1] > '9')
		break;
		ch = 0;
		}
		ktpis++;
	}

	if (ch == 0)
	return (0);

	return (mfiv);
}
