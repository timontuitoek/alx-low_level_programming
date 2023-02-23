#include "main.h"

/**
 * _isdigit - checks the dig
 *
 * @c: integer value of c
 *
 * Return: 1 if is between range else 0
 */

int _isdigit(int c)
{

	if ((c <= '0' && c <= '9'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
