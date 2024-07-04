#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments and reprensents the number of
 * command-line arguments passed to the program
 * @argv: array of arguments and an array of pointers to the
 * individual arguments.
 * Also unused indicates that argv parameter is not used
 *
 * Return: Value 0 indicate that the program has executed
 * successfully
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
