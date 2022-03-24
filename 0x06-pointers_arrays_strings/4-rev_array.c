#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concat string.
 *
 * @a: The source.
 * @n: The destination.
 * Return: The pointer to dest.
 */

void reverse_array(int *a, int n)
{
	int d, c, b[1000];

	b[0] = 0;
	for (c = n - 1, d = 0; c >= 0; c--, d++)
		b[d] = a[c];
	for (c = 0; c < n; c++)
		a[c] = b[c];
}

