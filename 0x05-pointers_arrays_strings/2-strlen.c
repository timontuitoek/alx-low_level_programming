#include "main.h"

/**
  * _strlen - main function of string length
  * @s: String to count
  *
  * Return: String the length
  */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

