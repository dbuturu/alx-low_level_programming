#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print_to_98 function
 *
 * Description: the print_to_98 function
 * puts text to stout.
 * @n: int n
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar('0' + (i / 10));
		_putchar('0' + (i % 10));
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	fprintf(stderr, "");
}

