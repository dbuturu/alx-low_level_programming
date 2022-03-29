#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: The string.
 * @c: The character to be located.
 * Return: pointer to first occurrence of c or NULL if char not found.
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}

	if (!c)
		return (s);

	return (NULL);
}

