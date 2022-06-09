#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@head: pointer to the memory location of the head pointer
 *@idx: index where the new node should be added
 *@n: the value of the new node
 *Return: address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy;
	dlistint_t *new;
	unsigned int nodes = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (nodes < idx && copy != NULL)
	{
		if (nodes == idx - 1)
		{
			if (copy->next == NULL)
				return (add_dnodeint_end(h, n));
			new->next = copy->next;
			new->prev = copy;
			copy->next->prev = new;
			copy->next = new;
			return (new);
		}
		copy = copy->next;
		nodes++;
	}

	return (NULL);}

