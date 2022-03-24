#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *reverse_array - reverse array.
 *
 * @a: The source.
 * @n: The destination.
 * Return: The pointer to dest.
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	return (s);
}

