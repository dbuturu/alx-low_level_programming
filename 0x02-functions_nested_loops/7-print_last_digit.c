#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print_last_digit function
 *
 * Description: the print_last_digit function
 * puts text to stout.
 * @i: int i
 * Return: 0
 */

int print_last_digit(int i)
{
	int last_digit;

	if (i < 0)
		i = -i;
	last_digit = i % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

