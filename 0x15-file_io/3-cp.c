#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define MAXSIZE 1024
#define SE STDERR_FILENO

/**
 * main - create copy bash script
 * @argc: argument count
 * @argv: arguments string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int input_fdescriptor, output_fdescriptor, istatus, ostatus;
	char buf[MAXSIZE];
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	input_fdescriptor = open(argv[1], O_RDONLY);
	if (input_fdescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	output_fdescriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output_fdescriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		istatus = read(input_fdescriptor, buf, MAXSIZE);
		if (istatus == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (istatus > 0)
		{
			ostatus = write(output_fdescriptor, buf, (ssize_t) istatus);
			if (ostatus == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (istatus > 0);
	istatus = close(input_fdescriptor);
	if (istatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", input_fdescriptor);
		exit(100);
	}
	ostatus = close(output_fdescriptor);
	if (ostatus == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", output_fdescriptor);
		exit(100);
	}
	return (0);
}
