#include "lists.h"
/**
 * free_list - Frees a list_t list.
 * @head: The head of the list_t list.
 */
void free_list(list_t *head)
{
        while (head)
        {
                free(head->str);
                free(head);
                head = head->next;
        }
}