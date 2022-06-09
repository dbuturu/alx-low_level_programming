#include "lists.h"
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@head: pointer to the memory location of the head pointer
 *@idx: index where the new node should be added
 *@n: the value of the new node
 *Return: address of the new node, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *copy;
	dlistint_t *new;
	unsigned int nodes = 0;
	unsigned int counter = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	copy = *head;
	while (copy)
	{
		nodes++;
		copy = copy->next;
	}

	if (nodes < idx)
	{
		free(new);
		return (NULL);
	}

	copy = *head;
	if (counter == idx)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (counter != idx - 1)
	{
		copy = copy->next;
		counter++;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
