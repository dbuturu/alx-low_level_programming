#include <stdio.h>

/**
 * print_numbers - print_numbers function
 *
 * Description: the print_numbers function
 * puts text to stout.
 * Return: 0
 */

int print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}

