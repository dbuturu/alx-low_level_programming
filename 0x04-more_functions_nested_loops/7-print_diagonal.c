#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print_diagonal function
 *
 * Description: the print_diagonal function
 * puts text to stout.
 * @n: int n
 */

void print_diagonal(int n)
{
	int c, i;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < i; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 0)
		_putchar('\n');
}

