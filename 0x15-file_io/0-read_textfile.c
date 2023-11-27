#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, 0 if:
 * - the file can not be opened or read,
 * - filename is NULL,
 * - write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_bytes, write_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocate buffer */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* read file */
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		return (0);
	}

	/* write to POSIX standard output */
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (write_bytes == -1 || read_bytes != write_bytes)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (write_bytes);
}
