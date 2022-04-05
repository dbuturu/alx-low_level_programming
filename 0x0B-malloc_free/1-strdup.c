#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: The str.
 * Return: A pointer to the array, or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	int l, i;

	if (str == NULL)
		return (NULL);
	l = (int)strlen(str);

	dup_str = malloc(sizeof(char) * (l + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

