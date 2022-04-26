#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: The head of the list_t list.
 * Return: A pointer to first node of reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}

