#include<stdio.h>

/**
 * main - Print alphabet without two letters
 *
 * Return: 0 successfully
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
