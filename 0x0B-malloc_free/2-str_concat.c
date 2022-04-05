#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 *
 * @s1: Str 1.
 * @s2: Str 2.
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, i;
	char *conct;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = (int)strlen(s1);
	l2 = (int)strlen(s2);

	conct = malloc(sizeof(char) * (l1 + l2 + 1));

	if (conct == NULL)
		return (NULL);

	l1 = (int)strlen(s1);
	l2 = (int)strlen(s2);

	for (i = 0; s1[i] != '\0'; i++)
	{
		conct[i] = s1[i];
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		conct[i + l1] = s2[i];
	}
	conct[i + l1] = '\0';
	return (conct);
}

