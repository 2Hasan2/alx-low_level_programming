#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append text to
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_bytes, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		write_bytes = write(fd, text_content, i);
		if (write_bytes == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
