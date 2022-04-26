#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list.
 * @h: The head of the list_t list.
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t counter = 0;

	while (*h && ((*h)->next < *h))
	{
		tmp = (*h)->next;
		counter++;
		free(*h);
		*h = tmp;
	}
	if (*h)
	{
		free(*h);
		counter++;
	}
	*h = NULL;
	return (counter);
}

