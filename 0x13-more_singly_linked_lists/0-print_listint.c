#include "lists.h"
#include <stdio.h>

/**
 * orint_listint - this prints all the elements of a linked list.
 * @h: a pointer to the head of the linked list
 *
 * Return: The number of nodes in the linked list
 */

size_t print_listint(const litsint_t *h);

{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n". h->n);
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
