#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserrts new node at given position
 * @head: pointer to head of linked list
 * @idx: index of list where it should be added
 * @n: value of new code
 *
 * Return: address of new node || NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *current_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
		{
	new_node->next = *head;
	*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (i < idx - 1 && current_node != NULL)
	{
	current_node = current_node->next;
		i++;
	}
	if (i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
