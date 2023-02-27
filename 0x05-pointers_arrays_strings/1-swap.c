#include "main.h"

/**
 * swap_int - check the code
 *
 *@a: interger to swap
 *@b: interger to swap
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
