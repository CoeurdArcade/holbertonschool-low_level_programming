#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @ptda: pattern in two dimension array
 * ri for rows iterations
 * ci for columns iterations
 */

void print_chessboard(char (*ptda)[8])
{
	int ri, ci;

	for (ri = 0; ri < 8; ri++)
	{
	for (ci = 0; ci < 8; ci++)
	{
	_putchar(ptda[ri][ci]);
	}
	_putchar('\n');
	}
}
