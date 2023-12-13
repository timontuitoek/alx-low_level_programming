#include <stdio.h>
#include <stdlib.h>

/**
 * advanced_binary_recursive - Recursively searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @start: Index representing the start of the subarray
 * @end: Index representing the end of the subarray
 * @value: The value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
    size_t i;

    if (start > end)
        return -1;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");

    i = (start + end) / 2;

    if (array[i] == value)
    {
        if (i > start && array[i - 1] == value)
            return advanced_binary_recursive(array, start, i, value);
        else
            return i;
    }
    else if (array[i] < value)
        return advanced_binary_recursive(array, i + 1, end, value);
    else
        return advanced_binary_recursive(array, start, i - 1, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array using advanced binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: Index where value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 6, 6, 6, 7, 8, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 2, advanced_binary(array, size, 2));
    printf("Found %d at index: %d\n", 10, advanced_binary(array, size, 10));

    return (EXIT_SUCCESS);
}