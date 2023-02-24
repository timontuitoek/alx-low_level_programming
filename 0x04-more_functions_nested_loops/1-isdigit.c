#include "main.h"

/**
 * _isdigit - checks the dig
 *
 * @c: integer value of c
 *
 * Return: 1 if is between range else 0
 */

int _isdigit(int c);

/**
 * _isdigit - function definition
 * Description: test if c is a digit
 * @c: the value to test
 * Return: 1-true, 0-false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

