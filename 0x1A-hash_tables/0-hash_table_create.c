#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    /* Declare a hash table pointer. */
    hash_table_t *htable;
    unsigned long int i;

    /* Allocate memory for the hash table structure. */
    htable = malloc(sizeof(hash_table_t));
    if (htable == NULL)
        return (NULL);

    /* Set the size of the hash table. */
    htable->size = size;

    /* Allocate memory for the array of hash nodes. */
    htable->array = malloc(sizeof(hash_node_t *) * size);
    if (htable->array == NULL)
    {
        free(htable); /* Free the previously allocated memory if an error occurs. */
        return (NULL);
    }

    /* Initialize all elements of the array to NULL. */
    for (i = 0; i < size; i++)
        htable->array[i] = NULL;

    return (htable);
}

