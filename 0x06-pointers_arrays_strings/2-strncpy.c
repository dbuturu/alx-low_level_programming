#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strncpy - copy string to nth src str.
 *
 * @src: The source.
 * @dest: The destination.
 * @n: The length of source used.
 * Return: The pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;

	for (j = 0; src[j] != '\0' && j < n; j++, i++)
		dest[i] = src[j];

	if (dest[j] != '\0')
		dest[++j] = '\0';

	return (dest);
}

