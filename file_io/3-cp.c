#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with a given code.
 * @message: The error message to print.
 * @filename: The name of the file associated with the error.
 * @code: The exit code.
 */

void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * print_fd_error - Prints an error message for file descriptor and exits with a given code.
 * @message: The error message to print.
 * @fd: The file descriptor associated with the error.
 * @code: The exit code.
 */

void print_fd_error(const char *message, int fd, int code)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}

/**
 * main - function that copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Conditions:	If the argument count is incorrect - exit code 97.
 * 		If file_from does not exist or cannot be read - exit code 98.
 * 		If file_to cannot be created or written to - exit code 99.
 * 		If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "", 97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			print_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	if (close(fd_from) == -1)
	{
		close(fd_to);
		print_fd_error("Error: Can't close fd %d\n", fd_from, 100);
	}

	if (close(fd_to) == -1)
	{
		print_fd_error("Error: Can't close fd %d\n", fd_to, 100);
	}

	return (0);
}
