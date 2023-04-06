nclude "lists.h"

/**
 * reverse_listint - this reverses the linked list
 * @head: a pointer to the address of the first node
 * in the reversed linked list
 *
 * Return: pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next + (*head)_>next;
		(*head)->next = prev:
			prev = *head;
		*head = next:
	}
	*head = prev;

	return (8head);
}
