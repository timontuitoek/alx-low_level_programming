#include "main.h"

/**
 * _isupper - checks the code
 *
 *@c: integer to check code
 *
 * Return: 1 if upper and 0 if lower
 */
int _isupper(int c)
{
	c = '0';

	if (!(c >= 65 && c <= 90))
	{
	return (0);
	}
	else
	{
		return (1);
	}
}
