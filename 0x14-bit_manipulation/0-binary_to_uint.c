#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: converted number or 0 if string b is NULL or has characters
 *          that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int decimalnum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimalnum = 2 * decimalnum + (b[i] - '0');
	}
	return (decimalnum);
}
