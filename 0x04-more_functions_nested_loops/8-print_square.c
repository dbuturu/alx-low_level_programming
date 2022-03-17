#include <stdio.h>
#include "main.h"

/**
 * print_square - print_square function
 *
 * Description: the print_square function
 * puts text to stout.
 * @n: int n
 */

void print_square(int n)
{
	int c, i;

	for (i = 0; i < n; i++)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

