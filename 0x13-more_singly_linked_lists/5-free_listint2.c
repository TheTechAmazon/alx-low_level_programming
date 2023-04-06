#include "lists.h"

/**
 * free_listint2 - this frees a linked list
 * @head; a pointer to the address of the head of the linked list to be freed
 *
 * return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head != NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
