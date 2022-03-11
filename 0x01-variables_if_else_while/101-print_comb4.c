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
	int x, y, z;

	for (x = 0; x <= 9; ++x)
		for (y = 0; y <= 9; ++y)
			for (z = 0; z <= 9; ++z)
			{
				if ((x < y) & (x < z) & (y < z))
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(z + '0');
					if (x < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}

