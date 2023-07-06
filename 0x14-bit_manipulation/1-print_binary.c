#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - Print the binary representation of a number.
 * @n: the number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
