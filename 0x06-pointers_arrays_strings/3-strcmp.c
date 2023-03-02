#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
