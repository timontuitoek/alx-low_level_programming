#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value in the array, or -1 if not found
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