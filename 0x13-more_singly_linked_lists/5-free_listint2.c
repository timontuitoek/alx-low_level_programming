#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - free's a listint_t list
 * @head: pointer to head of list
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

