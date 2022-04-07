#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: The pointer to memory previously allocated with a call to malloc.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes of the newly allocated space for ptr.
 * Return: Pointer to new memory block or NULL if new_size is equal to zero.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr = NULL;
	char *ptr_cpy;
	unsigned int i;
	char *old_ptr = (char *)ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	if (ptr == NULL)
		return (new_ptr);

	ptr_cpy = new_ptr;

	for (i = 0; i < old_size; i++)
	{
		*ptr_cpy = *old_ptr;
		ptr_cpy++;
		old_ptr++;
	}

	free(ptr);

	return (new_ptr);
}

