#include<stdio.h>

/**
 * main - Print alphabet, lower & upper case
 *
 * Return: 0
 */

int main(void)
{
	char z = 'a';
	char Z = 'A';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	while (Z <= 'Z')
	{
		putchar(Z);
		Z++;
	}
	putchar('\n');
	return (0);
}
