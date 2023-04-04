#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - free's a listint_t list
 * @head: pointer to the head of list
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
