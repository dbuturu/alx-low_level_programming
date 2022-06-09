#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @n: The value of the new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	return (NULL);
}

