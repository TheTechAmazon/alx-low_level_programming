nclude "lists.h"

/**
 * sum_listint - this calculates the sim of all the data (n) of a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the sum of all the data (n), if the list is empty -o
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}
	return (sum);
}
