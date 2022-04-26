#include "lists.h"
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: The head of the list_t list.
 * Return: the head node’s data (n) and 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int number;
	listint_t *newhead;

	if (*head == NULL)
		return (0);

	number = (*head)->n;

	newhead = (*head)->next;
	free(*head);
	*head = newhead;
	return (number);
}

