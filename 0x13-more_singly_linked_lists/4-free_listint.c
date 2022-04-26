#include "lists.h"
/**
 * free_listint - Frees a list_t list.
 * @head: The head of the list_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}

