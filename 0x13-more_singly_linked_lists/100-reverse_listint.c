#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: head of list
 *
 * Return: pointer to fist node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *t;
	listint_t *r;

	t = NULL;
	r = NULL;

	while (*head != NULL)
	{
		r = (*head)->next;
		(*head)->next = t;
		t = *head;
		*head = r;
	}

	*head = t;
	return (*head);
}
