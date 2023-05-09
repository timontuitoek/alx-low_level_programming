#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads the textfile of file
 *@filename: pointer to string
 *@letters: the letters to the text
 *
 * Return: actual number of characters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_descriptor;
	ssize_t bytes_written, bytes_read;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	f_descriptor = open(filename, O_RDONLY);

	if (f_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	bytes_read = read(f_descriptor, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < 0 || bytes_written != bytes_read)
	{
		close(f_descriptor);
		free(buffer);
	return (0);
	}

	close(f_descriptor);

	free(buffer);

	return (bytes_written);
}

