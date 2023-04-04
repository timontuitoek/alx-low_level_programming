#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes head node of listint_t linked list
 * @head: pointer to a pointer ro head of list
 *
 * Return: data of deleted head node or 0 if empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
