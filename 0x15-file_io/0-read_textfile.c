#include "main.h"

/**
 * read_textfile - Read file
 * @filename: File name
 * @num_letters: Number of letters
 * Return: Actual number
 */
ssize_t read_textfile(const char *filename, size_t num_letters)
{
    int descriptor, read_count, written_count;
    char *buffer;

    if (!filename)
        return (0);

    descriptor = open(filename, O_RDONLY);
    if (descriptor == -1)
        return (0);

    buffer = malloc(num_letters * sizeof(char));
    if (!buffer)
    {
        close(descriptor);
        return (0);
    }

    read_count = read(descriptor, buffer, num_letters);
    written_count = write(STDOUT_FILENO, buffer, read_count);

    if (written_count < 0)
    {
        free(buffer);
        close(file_descriptor);
        return (0);
    }

    free(buffer);
    close(file_descriptor);
    return (read_count);
}
