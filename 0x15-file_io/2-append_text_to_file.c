#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - Append text at end of file
 * @filename: name of the file to append to
 * @text_content: text to append
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_descriptor, new_text;
	size_t length;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	f_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (f_descriptor == -1)
		return (-1);
	length = strlen(text_content);
	new_text = write(f_descriptor, text_content, length);
	close(f_descriptor);
	if (new_text == -1 || (size_t)new_text != length)
		return (-1);
	return (1);
}

