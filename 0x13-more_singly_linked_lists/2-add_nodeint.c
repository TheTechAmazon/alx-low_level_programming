#include "list.h"

/**
 * add_nodeint - This adds a new node at the beginning of a linked list
 * @head: a pointer to the address of the head of the linked list
 *
 * Return: the address to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node - malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node - .next = *head;
	*head = new_node;
	return (new_node);
}
