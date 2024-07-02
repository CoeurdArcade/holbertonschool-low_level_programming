#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @pttda: pointer to 2D array
 * @somaa: size of the matrix as arguments
 * viom for variable iteration over matrix
 * sremd for store running elements main diagonal
 * sresd for store running elements second diagonal
 */

void print_diagsums(int *pttda, int somaa)
{
	int viom;

	unsigned int sremd, sresd;

	sremd = 0;
	sresd = 0;

	for (viom = 0; viom < somaa; viom++)
	{
		sremd += pttda[(somaa * viom) + viom];
		sresd += pttda[(somaa * (viom + 1)) - (viom + 1)];
	}

	printf("%d, %d\n", sremd, sresd);
}
