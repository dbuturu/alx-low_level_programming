#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: The head of the list_t list.
 * @index: The nth node of a dlistint_t linked list.
 * Return: The nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *p;
	unsigned int counter = 0;

	p = head;

	while (p)
	{
		nodes++;
		p = p->next;
	}
	p = head;
	if (index > nodes - 1)
		return (NULL);

	while (counter != index)
	{
		counter++;
		p = p->next;
	}
	return (p);
}

