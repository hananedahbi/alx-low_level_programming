#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int i, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	r = write(i, text_content, len);

	if (i == -1 || r == -1)
		return (-1);

	close(i);

	return (1);
}
