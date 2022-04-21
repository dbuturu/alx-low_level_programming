#include "lists.h"

/**
 * add_node_end - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to head of the linked list
 * @str: String needs to be duplicated
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new_node_end = malloc(sizeof(list_t));
	list_t *p = *head;
	int j;

	while (str[j++])
		;
	if (new_node_end)
	{
		new_node_end->str = strdup(str);
		new_node_end->len = strlen(str);
		new_node_end->next = NULL;
	}
	else
		return (NULL);

	if (!*head)
	{
		*head = new_node_end;
		return (*head);
	}
	p = *head;
	while (p->next)
		p = p->next;
	p->next = new_node_end;

	return (new_node_end);
}

