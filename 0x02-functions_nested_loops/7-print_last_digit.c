#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - print_last_digit function
 *
 * Description: the print_last_digit function
 * puts text to stout.
 * @i: int i
 * Return: last_digit
 */

int print_last_digit(int i)
{
	int last_digit;

	last_digit = i % 10;
	if (i < 0)
		last_digit = -last_digit;
	_putchar('0' + last_digit);
	return (last_digit);
}

