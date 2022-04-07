#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: This size of s2.
 * Return: Pointer to allocated space in memory containing the concatenated
 * strings or NULL if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, l1, l2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = (int)strlen(s1);
	l2 = (int)strlen(s2);
	if (l2 < (int)n)
		n = l2;

	str = malloc(sizeof(char) * (l1 + (int)n + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < l1; i++)
		str[i] = s1[i];

	for (j = 0; j < (int)n; i++, j++)
		str[i] = s2[j];

	str[i] = '\0';

	return (str);
}

