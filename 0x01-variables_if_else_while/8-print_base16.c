#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function
 * puts text to stout.
 * But you're totally free to use several lines to properly
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; ++c)
		putchar(c);
	for (c = 'a'; c <= 'f'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}

