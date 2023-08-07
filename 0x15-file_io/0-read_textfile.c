#include "main.h"

/**
 * read_textfile - Read file
 * @filename: File name
 * @num_letters: Number of letters
 * Return: Actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	read_count = read(fd, buffer, letters);
	close(fd);
	if (read_count == -1)
	{
		free(buffer);
		return (0);
	}
	write_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);
	if (read_count != write_count)
		return (0);
	return (write_count);
}
