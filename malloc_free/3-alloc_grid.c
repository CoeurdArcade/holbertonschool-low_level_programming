#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @vwa: variable width of a 2D array
 * @vha: variable height of a 2D array
 * mivlc is for mutable iteration variable loop counter
 * tmivlc is for twin mutable iteration variable loop counter
 * dtdaiwamwi is for dynamic two-dimensional array of integers with access
 * and modification with indexing
 *
 * Return: function that returns a pointer to a 2D array of integers
 * or NULL for failure
 */

int **alloc_grid(int vwa, int vha)
{
	int **dtdaiwammi;
	int mivlc, tmivlc;

	if (vha <= 0 || vwa <= 0)
	return (NULL);

	dtdaiwammi = (int **) malloc(sizeof(int *) * vha);

	if (dtdaiwammi == NULL)
	return (NULL);

	for (mivlc = 0; mivlc < vha; mivlc++)
	{
		dtdaiwammi[mivlc] = (int *) malloc(sizeof(int) * vwa);
		if (dtdaiwammi[mivlc] == NULL)
		{
		free(arr);
		for (tmivlc = 0; tmivlc <= mivlc; tmivlc++)
		free(dtdaiwammi[tmivlc]);
		return (NULL);
		}
	}

	for (mivlc = 0; mivlc < vha; mivlc++)
	{
		for (tmivlc = 0; tmivlc < vwa; tmivlc++)
		{
		dtdaiwammi[mivlc][tmivlc] = 0;
		}
	}
	return (dtdaiwammi);
}
