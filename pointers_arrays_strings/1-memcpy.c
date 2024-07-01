#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dma: destination memory area
 * @smatc: source memory area to copy
 * @nbtc: number of bytes to copy
 * ma is for memory area
 *
 * Return: pointer to destination memory area
 */
char *_memcpy(char *dma, char *smatc, unsigned int nbtc)
{
	unsigned int ma;

	for (ma = 0; ma < nbtc; ma++)
	{
		dma[ma] = smatc[ma];
	}

	return (dma);
}
