#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 *	a key in a hash table.
 * @htable: A pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key is not found or inputs are invalid - NULL.
 *	Otherwise - the value associated with the key in htable.
 */
char *hash_table_get(const hash_table_t *htable, const char *key)
{
	hash_node_t *node;	/* Pointer to a hash node. */
	unsigned long int index;	/* Index calculated for the key. */

	/* Check for NULL hash table or empty key. */
	if (htable == NULL || key == NULL || *key == '\0')
	return (NULL);

	/* Calculate the index for the key using the hash function. */
	index = key_index((const unsigned char *)key, htable->size);

	/* Ensure the calculated index is within bounds. */
	if (index >= htable->size)
	return (NULL);

	/* Search for the key in the linked list at the calculated index. */
	node = htable->array[index];
	while (node && strcmp(node->key, key) != 0)
	node = node->next;

	/* If the key is found, return its associated value; otherwise, return NULL. */
	return ((node == NULL) ? NULL : node->value);
}

