#include <string.h>
#include "main.h"

/**
 * puts_half- print str
 *
 * @str: char *str
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;

	n = ((int)strlen(str));
	if (n % 2 == 1)
	{
		i = (n - 1) / 2;
		i = n - i;
	}
	else
		i = n / 2;

	for (; i < ((int)strlen(str)); ++i)
		_putchar(str[i]);
	_putchar('\n');
}

