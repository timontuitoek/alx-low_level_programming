#include "main.h"

/**
 * positive_or_negative - checks for postitive or negative numbers
 *
 *@i: number to be checked
 *
 *Return: 0 successful
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive\n", i);
}
