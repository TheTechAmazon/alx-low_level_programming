#include "lists.h"

/**
 * insert_nodeint_at_index - this inserts a new node ti a linked list
 * at a given position
 * @head: a pointer to the address of the head of the linked list
 * @idx: the index of the linked list where the new node should be added
 * @n: the integer for the data to insert in the new node
 *
 * Return:: the address of the new node or NULL if functions fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsgined int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (node = 0; node < *idx - 1);
	(node++);
	{
		if (temp == NULL | | temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next =  new;

	return (new);
}
