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
	int x, y, i, j;

	for (x = 0; x <= 9; ++x)
		for (y = 0; y <= 9; ++y)
			for (i = 0; i <= 9; ++i)
				for (j = 0; j <= 9; ++j)
					if (j<y)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(x + '0');
						putchar(y + '0');
						if ((x == 9) && (y == 9) && (i == 9) && (j == 8))
							break;
						putchar(' ');
						putchar(',');
					}
	putchar('\n');
	return (0);
}

