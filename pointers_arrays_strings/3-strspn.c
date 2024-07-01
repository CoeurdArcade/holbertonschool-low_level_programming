#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @isbs: initial segment bytes in string
 * @sisbs: same initial segment bytes in string
 * iioec for index interation over each character in
 * siioec for second index interation over each character in
 * ktobis for keep track of bytes in initial segment
 * bfimcf for boolean flag indicating matching character found
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *isbs, char *sisbs)
{
	int iioec, siioec, ktobis, bfimcf;

	ktobis = 0;

	for (iioec = 0; isbs[iioec] != '\0'; iioec++)
	{
		bfimcf = 0;
		for (siioec = 0; sisbs[siioec] != '\0'; siioec++)
		{
		if (isbs[iioec] == sisbs[siioec])
		{
		ktobis++;
		bfimcf = 1;
		}
		}
		if (bfimcf == 0)
		{
		return (ktobis);
		}
	}

	return (0);
}
