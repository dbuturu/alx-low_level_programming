#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 * @array: The array of function arguments.
 * @size: The size of the array.
 * @action: The function you need to use.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

