#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcmp - compare string.
 *
 * @s1: The first string.
 * @s2: The second string.
 * Return: The pointer to dest.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned int)*s1 - (unsigned int)*s2);
}

