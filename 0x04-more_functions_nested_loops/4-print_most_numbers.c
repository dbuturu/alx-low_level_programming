#include <stdio.h>

/**
 * print_most_numbers - print_most_numbers function
 *
 * Description: the print_most_numbers function
 * puts text to stout.
 * Return: 0
 */

int print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
	{
		if (c == '2' || c == '4')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}

