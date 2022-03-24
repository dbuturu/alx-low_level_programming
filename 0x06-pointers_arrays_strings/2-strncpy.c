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
	int i;

	for (i = 0 ;i < n && *(src + i); i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}

