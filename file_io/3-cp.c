#include "main.h"

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
	dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	exit(code);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
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
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error_and_exit(98, "Error: Can't read from file", argv[1]);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error_and_exit(99, "Error: Can't write to", argv[2]);
	}

	buffer = malloc(BUFFER_SIZE);
	if (buffer == NULL)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error_and_exit(99, "Error: Can't allocate memory", "");
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			free(buffer);
			close_file(fd_from);
			close_file(fd_to);
			print_error_and_exit(98, "Error: Can't write to", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		free(buffer);
		close_file(fd_from);
		close_file(fd_to);
		print_error_and_exit(99, "Error: Can't read from file", argv[1]);
	}

	free(buffer);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

