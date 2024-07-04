#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments and indicates the number of
 * command-lines arguments passed to the program
 * @argv: array of arguments and an array of character pointers,
 * each pointing to a command-line argument
 * Also unused is used to suppress compiler warnings for unused
 * parameters.
 *
 * Return: Value 0 indicates that the program has executed
 * successfully
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
