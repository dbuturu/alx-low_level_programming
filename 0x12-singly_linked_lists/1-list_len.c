#include "lists.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: Pointer to the head of the linked list
 * Return: The total amount of nodes in the linked list
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

