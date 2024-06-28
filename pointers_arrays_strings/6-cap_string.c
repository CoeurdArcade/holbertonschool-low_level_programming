#include "main.h"

/**
 * cap_string - capitalizes characters of the string
 * @pctms: pointer characters to modify on the string
 * lcktcis is for loop counter keeping track current index string
 * iciocas is for index counter interation over characters array spe
 *
 * Return: pointer modified of the input string
 */

char *cap_string(char *pctms)
{
	int lcktcis, iciocas;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
	'"', '(', ')', '{', '}'};

	for (lcktcis = 0; pctms[lcktcis] != '\0'; lcktcis++)
	{
		if (lcktcis == 0 && pctms[lcktcis] >= 'a' && pctms[lcktcis] <= 'z')
		pctms[lcktcis] -= 32;

		for (iciocas = 0; iciocas < 13; iciocas++)
		{
		if (pctms[lcktcis] == spe[iciocas])
		{
			if (pctms[lcktcis + 1] >= 'a' && pctms[lcktcis + 1] <= 'z')
			{
			pctms[lcktcis + 1] -= 32;
			}
		}
		}
	}

	return (pctms);
}
