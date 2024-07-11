#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the 2D
 * array script created by a previous function
 * @papaaaedasc: pointer to array of pointers allowing access
 * any element by dereferencing appropriate sequence of
 * pointers
 *
 * @iarnor: integer argument representing number of rows of
 * a 2D array script created by a previous function
 *
 * ilcriopcr is for integer loop counter representing index or position
 * of current row being processed until reaches total number
 * of rows in the 2D array
 */
void free_grid(int **papaaaedasc, int iarnor)
{
	int ilcriopcr;

	if (papaaaedasc == NULL || iarnor == 0)
	return;

	for (ilcriopcr = 0; ilcriopcr < iarnor; ilcriopcr++)
	free(papaaaedasc[ilcriopcr]);

	free(papaaaedasc);
}
