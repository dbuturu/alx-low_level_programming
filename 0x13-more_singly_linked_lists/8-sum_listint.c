#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: The head of the list_t list.
 * Return: The sum of all the data in the linked list if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *copy;

	copy = head;

	while (copy != NULL)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}

