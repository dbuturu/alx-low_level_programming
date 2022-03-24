#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *leet - turn string 1337.
 *
 * @s: The input string.
 * Return: The pointer to dest.
 */
char *leet(char *s)
{
	int i, j;
	int lower_letters[] = {97, 101, 111, 116, 108};
	int upper_letters[] = {65, 69, 79, 84, 76};
	int leets[] = {52, 51, 48, 55, 49};

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; j < 5; j++)
			if (*(s + i) == lower_letters[j] || *(s + i) == upper_letters[j])
			{
				*(s + i) = leets[j];
				break;
			}

	return (s);
}

