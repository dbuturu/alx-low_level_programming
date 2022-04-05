#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
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


	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i + l1] = s2[i];
	}
	conct = s1;
	conct[i] = '\0';
	return (conct);
}

