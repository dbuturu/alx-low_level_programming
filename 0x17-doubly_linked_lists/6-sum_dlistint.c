#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: The head of the list_t list.
 * Return: The sum of all the data in
 * the linked list if the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *copy;

	copy = head;

	while (copy != NULL)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}

