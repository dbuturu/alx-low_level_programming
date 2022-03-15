#include <stdio.h>

/**
 * print_alphabet - print_alphabet function
 *
 * Description: the print_alphabet function
 * puts text to stout.
 * But you're totally free to use several lines to properly
 * Return: 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
}

