#include "lists.h"

#include <stdio.h>

/**
 * listint_len - This returns the number of elements in a linked lists
 * @h: a pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
