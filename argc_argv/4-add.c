#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @fcpaa: first character pointer as argument
 * iicl is for index iteration character loop
 * Return: Integer conversion
 */

int _atoi(char *fcpaa)
{
	int iicl, d, n, len, f, digit;

	iicl = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (fcpaa[len] != '\0')
	len++;

	while (iicl < len && f == 0)
	{
		if (fcpaa[iicl] == '-')
		++d;

		if (fcpaa[iicl] >= '0' && fcpaa[iicl] <= '9')
		{
		digit = fcpaa[iicl] - '0';
		if (d % 2)
		digit = -digit;
		n = n * 10 + digit;
		f = 1;
		if (fcpaa[iicl + 1] < '0' || fcpaa[iicl + 1] > '9')
		break;
		f = 0;
		}
		iicl++;
	}

	if (f == 0)
	return (0);

	return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */

int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] > '9' || argv[i][j] < '0')
		{
		puts("Error");
		return (1);
		}
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = _atoi(argv[k]);
		if (num >= 0)
		{
		sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
