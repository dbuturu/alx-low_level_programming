#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The amount of memory.
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}

