#include <stdio.h>
/**
 * main - print all combinations of 2 digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int q = '0';
	int k = '0';

	while (q <= '9')
	{
		while (k <= '9')
		{
			if (!(q > k || q == k))
			{
				putchar(q);
				putchar(k);
				if (q == '8' && k == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			k++;
		}
		k = '0';
		q++;
	}
	return (0);
}
