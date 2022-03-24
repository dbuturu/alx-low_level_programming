#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_number - print_number.
 *
 * @n: The input number.
 * Return: void.
 */

void print_number(int n)
{
	int d, i;
	unsigned int m;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
		m = n;

	d = m;
	i = 1;

	while (d > 9)
	{
		d /= 10;
		i *= 10;
	}

	for (; i >= 1; i /= 10)
		_putchar(((m / i) % 10) + 48);
}
