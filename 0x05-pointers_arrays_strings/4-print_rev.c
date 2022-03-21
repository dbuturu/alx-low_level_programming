#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * print_rev - print in rev
 *
 * @s: char *s
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = ((int)strlen(s)); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

