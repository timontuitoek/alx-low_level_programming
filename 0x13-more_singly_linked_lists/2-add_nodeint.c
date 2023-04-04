#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: pointer to head node of list
 * @n: integer value to add new node
 *
 * Return: address of the new element || NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL\n);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node\n);
}
