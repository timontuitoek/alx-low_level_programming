#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table.
 * @htable: The hash table to print.
 *
 * Description: This function prints key-value pairs in the hash table.
 */
void hash_table_print(const hash_table_t *htable)
{
	unsigned int index = 0;
	hash_node_t *node;
	int counter = 0;

	if (!htable)
	return;

	printf("{");
	for (index = 0; index < htable->size; index++)
	{
	node = htable->array[index];
	if (node)
	{
	while (node)
	{
	if (counter != 0)
	printf(", ");
	printf("'%s': '%s'", node->key, node->value);
	counter++;
	node = node->next;
	}
	}
	}
	printf("}\n");
}

