#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size is the size of the array.
 *
 * Return: A a pointer to the newly created hash hash_tables
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));
	unsigned long int index = 0;

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	while (index < size)
		hash_table->array[index++] = NULL;

	return (hash_table);
}
