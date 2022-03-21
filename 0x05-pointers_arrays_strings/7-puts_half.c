#include <string.h>
#include "main.h"

/**
 * puts2- print str
 *
 * @str: char *str
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	n = ((int)strlen(str)) / 2;
	for (i = n; i < ((int)strlen(str)); ++i)
		_putchar(str[i]);
	_putchar('\n');
}

