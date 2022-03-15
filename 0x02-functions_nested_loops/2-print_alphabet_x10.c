#include <stdio.h>

/**
 * print_alphabet_x10 -  print_alphabet_x10 function
 *
 * Description: the print_alphabet function
 * puts text to stout.
 * But you're totally free to use several lines to properly
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; ++i)
	{
		for (c = 'a'; c <= 'z'; ++c)
			putchar(c);
		putchar('\n');
	}
}

