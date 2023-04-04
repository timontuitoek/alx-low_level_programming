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
	listint_t *tmp, *current = *head;
	unsigned int node;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
	}

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);
}
