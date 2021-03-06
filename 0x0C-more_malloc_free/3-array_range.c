#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum int.
 * @max: The maximum int.
 * Return: The pointer to the newly created array or NULL.
 */
int *array_range(int min, int max)
{
	int *array;
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	array = malloc(sizeof(int) * n);

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		array[i] = min++;

	return (array);
}

