#include "main.h"
#include <string.h>

/**
 * _puts- print str
 *
 * @str: char *s
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int t = 0;

	j = strlen(s) - 1;

	while (i < j + 1 / 2)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;

		j--;
		i++;
	}
}

