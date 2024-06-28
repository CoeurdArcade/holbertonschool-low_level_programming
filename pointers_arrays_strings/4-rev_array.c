#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @pai: pointer to an array of integers
 * @neia: number of elements in the array
 *
 * Return: content array reversed
 */

void reverse_array(int *pai, int neia)
{
	int lv1, lv2, tmpv;

	lv2 = neia - 1;

	for (lv1 = 0; lv1 < neia / 2; lv1++)
	{
	tmpv = pai[lv1];
	pai[lv1] = pai[lv2];
	pai[lv2--] = tmpv;
	}
}
