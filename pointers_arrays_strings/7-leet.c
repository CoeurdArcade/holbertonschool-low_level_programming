#include "main.h"

/**
 * leet - encodes a string in 1337
 * @scein: string characters to be encoded in numerals
 * ivc is for integer variable characters
 * ivn is for integer variable numeral
 * cpod is for character pointer order defined
 * npod is for numeral pointer order defined
 *
 * Return: the resulting string;
 */

char *leet(char *scein)
{
	int ivc, ivn;

	char *cpod = "aAeEoOtTlL";
	char *npod = "4433007711";

	for (ivc = 0; scein[ivc] != '\0'; ivc++)
	{
		for (ivn = 0; ivn < 10; ivn++)
		{
		if (scein[ivc] == cpod[ivn])
		{
		scein[ivc] = npod[ivn];
		}
		}
	}

	return (scein);
}
