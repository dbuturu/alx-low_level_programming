#include "lists.h"
/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@h: pointer to the memory location of the head pointer
 *@idx: index where the new node should be added
 *@n: the value of the new node
 *Return: address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	copy = *h;

	if (new == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
		{
			if (copy == NULL)
				return (NULL);
			copy = copy->next;
			idx--;
	}
	new->n = n;
	new->prev = copy;
	new->next = copy->next;
	copy->next = new;
	if (new->next)
		new->next->prev = new;
	return (new);
}

