#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int binary_to_uint - converting binary num to an unsigned int
 * @b: pointer to string containing binary num
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int j = 0;

	unsigned int result = 0;

	if (!b)
	{
		return(0);
	}
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
		{
			return (0);
		}
		result = 2 * result + (b[j] - '0');
	}
	return(result);
}
