#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 *
 * Return: converted number or 0 if string is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)

	{
		if (b[i] < '0' || b[i] > '1')

			return (0);
		result = 2 * result + (b[i] - '0');

	}
	return (result);
}
