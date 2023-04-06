#include "lists.h"

/**
 * add_nodeint_end - this adds a node at the end of a linked list
 * @head: a pointer to the address of the head of the linked list
 * @n: The integer for the new node to contasin
 *
 * Return; to the address of the newly added node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
			if (head != NULL)
			{
				while (head->next != NULL)
					head = head->next;
				head->next = new_node;
			}
			else
				*head = new_node;
	return (new_node);
}
