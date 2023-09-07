#include "hash_tables.h"

/**
 * key_index - Retrieves the index at which a key/value 
 * pair should be stored in the hash table's array.
 * @key: The key for which the index is calculated.
 * @size: The size of the hash table's array.
 *
 * Return: The calculated index for the given key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Calculate the hash using the djb2 algorithm and then mod it by the array size. */
    return (hash_djb2(key) % size);
}

