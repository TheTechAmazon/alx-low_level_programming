#include "lists.h"

/**
 * free_listint - This frees a linked list
 * @head: a pointer to the head of the address of the linked list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(temp);
		head = temp;
	}
}
