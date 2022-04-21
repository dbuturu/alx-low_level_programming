#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: The head of the list_t list.
 * Return: The total amount of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
	int i;

	if (!h)
		return (0);
	for (i = 1; h->next; i++)
		h = h->next;
	return (i);
}

