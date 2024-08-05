#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

/**
 * print_error_and_exit - Prints an error message and exits with a given code.
 * @code: The exit code.
 * @message: The error message to print.
 * @filename: The filename associated with the error.
 */
void print_error_and_exit(int code, const char *message, const char *filename)
{
	fprintf(stderr, "%s %s\n", message, filename);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	FILE *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	size_t bytes_read, bytes_written;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = fopen(argv[1], "r");
	if (file_from == NULL)
	{
		print_error_and_exit(98, "Error: Can't read from file", argv[1]);
	}

	file_to = fopen(argv[2], "w");
	if (file_to == NULL)
	{
		fclose(file_from);
		print_error_and_exit(99, "Error: Can't write to", argv[2]);
	}

	while ((bytes_read = fread(buffer, 1, BUFFER_SIZE, file_from)) > 0)
	{
		bytes_written = fwrite(buffer, 1, bytes_read, file_to);
		if (bytes_written != bytes_read)
		{
			fclose(file_from);
			fclose(file_to);
			print_error_and_exit(99, "Error: Can't write to", argv[2]);
		}
	}

	if (ferror(file_from))
	{
		fclose(file_from);
		fclose(file_to);
		print_error_and_exit(98, "Error: Can't read from file", argv[1]);
	}

	fclose(file_from);
	fclose(file_to);

	return (0);
}
