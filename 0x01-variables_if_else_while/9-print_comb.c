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
	int n;

	for (n = 0; n <= 9; ++n)
	{
		putchar(n + '0');
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

