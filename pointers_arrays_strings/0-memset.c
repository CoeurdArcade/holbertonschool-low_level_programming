#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @matf: memory area to be filled
 * @ctp: char to copy
 * @ntcctp: number of times to copy ctp
 * cb is fot constant byte
 *
 * Return: pointer to the memory area allocated
 */

char *_memset(char *matf, char ctp, unsigned int ntcctp)
{
	unsigned int cb;

	for (cb = 0; cb < ntcctp; cb++)
	{
		matf[cb] = ctp;
	}

	return (matf);
}
