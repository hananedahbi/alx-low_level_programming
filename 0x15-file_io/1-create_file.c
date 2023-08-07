#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Create a file and write text to it.
 * @filename: Name of the file to create.
 * @text_content: Text to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, written_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;

		written_count = write(fd, text_content, len);
		if (written_count == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
