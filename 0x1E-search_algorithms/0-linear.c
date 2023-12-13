#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search algorithm
 * @array: pointer to first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	return (-1);

	for (; i < size; ++i)
	{
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
	break;
	}

	if (i == size)
	return (-1);

	return (i);
}