#include<stdio.h>

/**
 * main - Prints alphabet without two letters
 *
 * Return: 0 successfully
 */

int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		if (z != 'q' && z != 'e')
		{
			putchar(z);
		}
		z++;
	}
	putchar('\n');
	return (0);
}
