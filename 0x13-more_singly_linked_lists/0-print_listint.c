#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node of the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t thecount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;

		thecount++;
	}
	return (thecount);
}
