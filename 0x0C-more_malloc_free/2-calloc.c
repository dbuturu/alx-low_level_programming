#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory set to zero for an array using malloc.
 * @nmemb: The length of array.
 * @size: The size of each element.
 * Return: Pointer to the allocated memory or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, mem;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = (int)(nmemb * size);

	array = malloc(mem);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < mem; i++)
		array[i] = 0;

	return (array);
}

