#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_file - Create a new file
 * @filename: name of the file to create.
 * @text_content: content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_description;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);
	file_description = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_description == -1)
		return (-1);
	if (text_content != NULL)
	{
	bytes_written = write(file_description, text_content, strlen(text_content));
	if (bytes_written == -1)
	{
		close(file_description);
		return (-1);
	}
	}
	close(file_description);
	return (1);
}