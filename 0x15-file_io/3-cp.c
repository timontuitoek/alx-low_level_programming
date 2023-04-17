#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUF_SIZE 1024

int copy_file(char *file_from, char *file_to);
void print_usage(char *program_name);
int main(int argc, char *argv[]);

/**
 * main - copies the contents of a file to another file.
 * @argc: argument counts
 * @argv: argument vectors
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_usage(argv[0]);
	}
	return (copy_file(argv[1], argv[2]));
	return (0);
}

/**
 * print_usage - print usage message and exits with code 97
 * @program_name: name of the program
 * Return: none
 */

void print_usage(char *program_name)
{
	dprintf(STDERR_FILENO, "Usage: cp %s file_from file_to\n", program_name);
	exit(97);
}

/**
 * copy_file - copies content of one file to another
 * @file_from: source file
 * @file_to: destination file
 * Return: 0 on success,  exit otherwise
 */

int copy_file(char *file_from, char *file_to)
{
	int filed_from, filed_to, bytes_read, bytes_written, close_status;
	char buf[BUF_SIZE];

	filed_from = open(file_from, O_RDONLY);
	if (filed_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	filed_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (filed_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((bytes_read = read(filed_from, buf, BUF_SIZE)) > 0)
	{
		bytes_written = write(filed_to, buf, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_status = close(filed_from);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filed %d\n", filed_from);
		exit(100);
	}
	close_status = close(filed_to);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filed_to);
		exit(100);
	}
	return (0);
}
