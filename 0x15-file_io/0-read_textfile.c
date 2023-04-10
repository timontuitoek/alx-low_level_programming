#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads the textfile of file
 *@filename: pointer to string
 *@letters: the letters to the text
 *
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fb;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fb = open(filename, O_RDONLY);

	if (fb == -1)
	{
		return (0);
	}

	if (fb == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	bytes_read = read(fb, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fb);

	free(buffer);

	return (bytes_read);
}
