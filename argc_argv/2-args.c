#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: integer representing number of arguments
 * @argv: array of strings containing the arguments
 * @iiv: integer index variable
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int iiv;

	for (iiv = 0; iiv < argc; iiv++)
	{
	printf("%s\n", argv[iiv]);
	}

	return (0);
}
