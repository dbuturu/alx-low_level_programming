#include "main.h"
#include <stdio.h>

/**
 * *rot13 - rot13 encoder.
 *
 * @s: The input string.
 * Return: The output srting.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (*(s + i) == alphabet[j])
			{
				*(s + i) = rot13[j];
				break;
			}

	return (s);
}

