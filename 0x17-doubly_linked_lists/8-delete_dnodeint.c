#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes a node at index
 * of a dlistint_t linked list.
 * @head: The head of the list_t list.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	dlistint_t *indexm1 = *head, *indexpos = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(indexpos);
		return (1);
	}
	while (nodes != index)
	{
		if (nodes == index - 1)
			indexm1 = indexpos;
		indexpos = indexpos->next;
		if (indexpos == NULL)
			return (-1);
		nodes++;
	}
	indexm1->next = indexpos->next;
	free(indexpos);
	return (1);
}

