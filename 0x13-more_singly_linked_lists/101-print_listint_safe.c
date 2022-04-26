#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: The head of the list_t list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;

	while (head && head->next < head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		counter++;
		head = head->next;
	}
	if (head)
	{
		printf("[%p] %d\n", (void *) head, head->n);
		counter++;
		printf("-> [%p] %d\n", (void *) head->next, head->next->n);
	}
	return (counter);
}

