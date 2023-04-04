#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of elemts in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
