#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Create a new file
 * @filename: name of the file to create.
 * @text_content: content to write to the file.
 *
 * Return: 1
 */

int create_file(const char *filename, char *text_content)
{
	int f_descriptor;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	f_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
	bytes_written = write(f_descriptor, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(f_descriptor);
		return (-1);
	}
	}
	close(f_descriptor);
	return (1);
}
