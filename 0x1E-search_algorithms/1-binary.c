#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the first element of the array
 * @left: Starting index to print from
 * @right: Ending index to print until
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;

	size_t left, right, mid;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		print_array(array, left, right);

		if (array[mid] == value)
			return mid;

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1; /* Value not found */
}