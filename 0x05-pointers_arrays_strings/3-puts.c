#include "main.h"

/**
 * _puts- print str
 *
 * @str: char *str
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}

