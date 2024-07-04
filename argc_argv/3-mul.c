#include <stdio.h>
#include "main.h"

/**
 * _atoi - function converts a string to an integer
 * @stc: string to convert
 * dici is for digit index counter iteration
 * fckfsvi is for flag counter keeper for sign value interpreter
 * artktiv is for accumulator running total keeper track integer value
 * lcvtnck is for length counter variable track number characters keeper
 * bftkde is for boolean flag track keeper digit encounter
 * tiivsv is for temporary intermediate integer value storage variable
 *
 * Return: Value 0 default value for conversion in case the string input
 * doesn't contain any digit or only whitespace characters
 * Value artktvi for value back caller of integer value obtained from input
 * argument
 */

int _atoi(char *stc)
{
	int dici, fckfsvi, artktiv, lcvtnck, bftkde, tiivsv;

	dici = 0;
	fckfsvi = 0;
	artktiv = 0;
	lcvtnck = 0;
	bftkde = 0;
	tiivsv = 0;

	while (stc[lcvtnck] != '\0')
	lcvtnck++;

	while (dici < lcvtnck && bftkde == 0)
	{
		if (stc[dici] == '-')
		++fckfsvi;

		if (stc[dici] >= '0' && stc[dici] <= '9')
		{
		tiivsv = stc[dici] - '0';
		if (fckfsvi % 2)
		tiivsv = -tiivsv;
		artktiv = artktiv * 10 + tiivsv;
		bftkde = 1;
		if (stc[dici + 1] < '0' || stc[dici + 1] > '9')
		break;
		bftkde = 0;
		}
		dici++;
	}

	if (bftkde == 0)
	return (0);

	return (artktiv);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * rhcvst is for result holder container variable store multiplication
 * fnhcvcivrfcl is for first number holder container variable conversion
 * integer value representation first command line
 * snhcvcivrscl is for second number holder container variable conversion
 * integer value representation second command line
 *
 * Return: Value 0 for further multiplication use in the code
 * value 1 for default value ensuring program handles invalid input or
 * whitespace characters present in the input
 */

int main(int argc, char *argv[])
{
	int rhcvst, fnhcvcivrfcl, snhcvcivrscl;

	if (argc < 3 || argc > 3)
	{
	printf("Error\n");
	return (1);
	}

	fnhcvcivrfcl = _atoi(argv[1]);
	snhcvcivrscl = _atoi(argv[2]);
	rhcvst = fnhcvcivrfcl * snhcvcivrscl;

	printf("%d\n", rhcvst);

	return (0);
}
