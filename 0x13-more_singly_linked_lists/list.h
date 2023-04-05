#ifndef List_h
#define List_h

/*
 * Desc: This file contain all the prototype pf the function of the tasks given
 * in 0x13-more_singly_linked_lists directory
 * in ALX-low_lwvwl_programme repository
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked lists
 * @n: an integer
 * @next: this points to the next nodes
 *
 * Description:This is the singly linked lists structure
 * for alx holberton project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint.t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_node(listint_t **head, const int n);
listint-t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(lisint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsgined int idx, int n);
int delete_nodeint_at_index(listint_t **head, unsigned in index);
listint_t *reverse_listint(listint_t **head);
size-t print_listint_safe(const listint_t **head);
size_t free_listint_safe(listint_t **h);
listint_t *find_listint_loop(listint_t *head);

endif /* Lists-h */
