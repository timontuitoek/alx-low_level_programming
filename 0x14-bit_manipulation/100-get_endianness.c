#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * get_endianness - function to get endianness
 *
 * Return: 0 if big endian, 1 if ittle endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *b = (char *) &x;

	return (*b == 1);
}
