#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index index of a listint_t linked list.
 * @head: The head of the list_t list.
 * @index: is the index of the node that should be deleted.
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes = 0;
	listint_t *indexm1 = *head, *indexpos = *head;

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

