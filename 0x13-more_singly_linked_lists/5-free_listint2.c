#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free's a memory of each node
 * @head: pointer to head of list
 *
 * Return: NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}

	*head = NULL;
}
