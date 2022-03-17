#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print_triangle function
 *
 * Description: the print_triangle function
 * puts text to stout.
 * @n: int n
 */

void print_triangle(int n)
{
	int x, y, i;

	for (i = 0; i < n; i++)
	{
		for (x = n; x > i; x--)
		{
			_putchar(' ');
		}
		for (y = 0; y <= i; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

