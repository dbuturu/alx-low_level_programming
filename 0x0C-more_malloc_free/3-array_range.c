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

	n = 0;
	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		n++;

	array = malloc(sizeof(int) * n);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
		array[i] = min + i;

	return (array);
}

