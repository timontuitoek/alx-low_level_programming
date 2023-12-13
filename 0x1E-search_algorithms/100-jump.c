#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t step;
    size_t prev;
    size_t i;

    step = sqrt(size);
    prev = 0;

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

        if (prev + step >= size)
        {
            for (i = prev; i < size; i++)
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            break;
        }

        if (array[prev + step] >= value)
        {
            for (i = prev; i <= prev + step; i++)
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            break;
        }

        prev += step;
    }

    for (i = prev; i < size && i < prev + step; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1; /* Value not found */
}