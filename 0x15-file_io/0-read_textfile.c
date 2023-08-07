#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Read and print a text file to POSIX stdout.
 * @filename: Pointer to file name.
 * @num_letters: Number of letters to read and print.
 *
 * Return: If failed or filename is NULL - 0.
 *         O/w - actual bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
	ssize_t file_desc, read_count, write_count;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * num_letters);
	if (buf == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(buf);
		return (0);
	}

	read_count = read(file_desc, buf, num_letters);
	if (read_count == -1)
	{
		free(buf);
		close(file_desc);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buf, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(buf);
		close(file_desc);
		return (0);
	}

	free(buf);
	close(file_desc);
	return (write_count);
}
