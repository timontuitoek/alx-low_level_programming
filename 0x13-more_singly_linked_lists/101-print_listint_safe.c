#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - function printing elemts in list
 * @head: pointer to listint
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	const listint_t *a = head, *b = head;

	if (head == NULL)
		exit(98);

	while (a && b && b->next && head)
	{
		a = a->next;
		b = b->next->next;
		if (a == b)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(0);
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		node++;
	}
	head = NULL;
	return (node);
}
