#include "main.h"

/**
 * main - Entry point of print_alphabet
 *
 * Return: 0 successfully
 */

void print_alphabet(void);
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);
	_putchar("\n");
}
