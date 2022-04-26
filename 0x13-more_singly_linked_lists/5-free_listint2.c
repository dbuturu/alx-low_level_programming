#include "lists.h"
/**
 * free_listint2 - Frees a list_t list.
 * @head: The head of the list_t list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head);
		*head = (*head)->next;
		free(current);
	}
	head = NULL;
}

