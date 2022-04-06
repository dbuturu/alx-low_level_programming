#include "main.h"
#include <stdlib.h>
#include <string.h>
int count_word(char *s);
/**
 * **strtow - Splits a string into words.
 *
 * @str: The string to evaluate.
 * Return: Pointer to an array of strings (words)
 * if it fails, it should return NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, j, len, words, c, start, end;

	j = len = c = 0;
	len = (int)strlen(str);
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else
		{
			if (c++ == 0)
				start = i;
		}
	}

	matrix[j] = NULL;

	return (matrix);
}

/**
 * count_word - Helper function to count the number of words in a string.
 *
 * @s: The string to evaluate.
 * Return: Number of words.
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}

