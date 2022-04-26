#include "lists.h"
/**
 * free_listint - Frees a list_t list.
 * @head: The head of the list_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	if (!head)
		return;
	else if (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}

