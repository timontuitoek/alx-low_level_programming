#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array of chars and initialize with char
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *b;
	unsigned int i;

	b = malloc(sizeof(char) * size);

	if (size == 0 || b == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	b[i] = c;

	return (b);
}
