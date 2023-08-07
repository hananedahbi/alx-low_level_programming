#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, otherwise exit with specified error codes.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, read_count;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), close(fd_from), exit(99);

	while ((read_count = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, read_count) == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), close(fd_from), close(fd_to), exit(99);
	}

	if (read_count == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), close(fd_from), close(fd_to), exit(98);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(100);

	return (0);
}
