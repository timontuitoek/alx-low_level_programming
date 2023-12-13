#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        using Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return pos;

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    if (low <= high)
        printf("Value checked array[%lu] is out of range\n", pos);

    return -1; /* Value not found */
}