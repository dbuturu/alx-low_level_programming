#include "lists.h"
/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: The head of the listint_t list.
 * Return: The number nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}
	return (i);
}

