#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read file
 * @filename: File name
 * @letters: Number of letters
 * Return: Actual number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_desc, read_count, write_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * num_letters);
	if (buffer == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	read_count = read(file_desc, buffer, num_letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (file_desc == -1 || read_count == -1 || write_count == -1 || write_count != read_count)
	{
		free(buffer);
		return (0);
	}
	
	free(buffer);
	close(file_desc);

	return (write_count);
}
