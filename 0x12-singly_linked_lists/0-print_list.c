#include "lists.h"

/**
 * print_list - Prints all of the elements of a list_t list.
 * @h: The head of the list_t list.
 * Return: The number nodes.
 */
size_t print_list(const list_t *h)
{
	int i;

	if (!h)
		return (0);
	for (i = 1; h->next ; i++)
	{
		if (!h->str)
			printf("[%i] %s\n", (int)h->len, "(nil)");
		else
			printf("[%i] %s\n", (int)h->len, h->str);
		h = h->next;
	}
	printf("[%i] %s\n", (int)h->len, h->str);
	return (i);
}

