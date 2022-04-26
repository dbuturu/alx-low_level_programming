#include "lists.h"
/*
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	if (!head)
		return (NULL);
	last_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = new_node;
	return (*head);
}

