#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 always
 *
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 1 ; j < 10 ; j++)

		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar('0');
			if (1 + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
