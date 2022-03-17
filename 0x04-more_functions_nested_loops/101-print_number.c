#include <stdio.h>
#include "main.h"

/**
 * print_number - print_number function
 *
 * Description: the print_number function
 * puts text to stout.
 * Return: 0
 */

void print_number(int n)
{
	unsigned int m;


	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;
	if (m / 10)
		print_number(m / 10);
	_putchar(m % 10 + '0');
}

