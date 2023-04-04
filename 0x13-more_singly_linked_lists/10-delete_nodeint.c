#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: pointer to head of linked list
 * @index: index of node to be deleted
 *
 * Return: 1 on success || -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		return (1);

	}

	prev_node = *head;
	current_node = (*head)->next;
	for (k = 1; current_node != NULL && k < index; k++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (-1);
}
