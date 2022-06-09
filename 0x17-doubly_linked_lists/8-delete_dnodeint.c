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
	dlistint_t *indexm1 = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	while (nodes < index)
	{
		if (indexm1 == NULL)
			return (-1);
		indexm1 = indexm1->next;
		nodes++;
	}
	if (indexm1 == *head)
		*head = indexm1->next;
	if (indexm1->next != NULL)
		indexm1->next->prev = indexm1->prev;
	if (indexm1->prev != NULL)
		indexm1->prev->next = indexm1->next;
	free(indexm1);
	return (1);
}

