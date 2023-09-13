#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @htable: The hash table to add or update the key/value pair in.
 * @key: The key.
 * @value: The value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *htable, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *existing_node = NULL;

	if (strcmp(key, "") == 0 || !htable)
	return (0);

	index = key_index((const unsigned char *)key, htable->size); /* Calculate the hash index. */

	if (htable->array[index] != NULL) /* Handle collision. */
	{
	existing_node = htable->array[index];
	while (existing_node)
	{
	if (strcmp(existing_node->key, key) == 0)
	{
	free(existing_node->value);
	existing_node->value = strdup(value); /* Update the value. */
	return (1);
	}
	existing_node = existing_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = htable->array[index]; /* Insert the new node at the beginning of the list. */
	}
	else
	{
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	}

	htable->array[index] = new_node; /* Update the array at the calculated index. */
	return (1);
}

