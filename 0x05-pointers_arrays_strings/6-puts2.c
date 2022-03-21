#include <string.h>
#include "main.h"

/**
 * puts2- print str
 *
 * @str: char *str
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < ((int)strlen(str)); i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}

