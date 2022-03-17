#include <stdio.h>

/**
 * print_line - print_line function
 *
 * Description: the print_line function
 * puts text to stout.
 * @n: int n
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; ++i)
		putchar('_');
	putchar('\n');
}

