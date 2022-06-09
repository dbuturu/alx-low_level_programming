#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked listint_t list.
 * @h: The head of the listint_t list.
 * Return: The number of elements in a linked listint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}

