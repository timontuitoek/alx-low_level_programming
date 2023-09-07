#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @htable: A pointer to the hash table to be deleted.
 *
 * Description: This function frees the memory associated with the hash table
 * and all its nodes, including keys and values.
 */
void hash_table_delete(hash_table_t *htable)
{
    hash_table_t *head = htable;  /* Store the original pointer for freeing. */
    hash_node_t *node, *tmp;
    unsigned long int i;

    for (i = 0; i < htable->size; i++)
    {
        if (htable->array[i] != NULL)
        {
            node = htable->array[i];
            while (node != NULL)
            {
                tmp = node->next;
                free(node->key);
                free(node->value);
                free(node);
                node = tmp;
            }
        }
    }

    free(head->array); /* Free the array of the hash table. */
    free(head);        /* Free the hash table structure itself. */
}

