#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void
hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *cursor = NULL, *old_hash_table = NULL;

	if (!ht)
		return;

	while (index < ht->size)
	{
		cursor = ht->array[index++];

		while (cursor)
		{
			old_hash_table = cursor;
			cursor = cursor->next;

			free(old_hash_table->key);
			free(old_hash_table->value);
			free(old_hash_table);
		}
	}

	free(ht->array);
	free(ht);
}
