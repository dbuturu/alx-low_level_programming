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
	int n = 0;
	int m = 0;
	int o = 0;
	int p = 0;

	while (n <= 9)
	{
		while (m <= 9)
		{
			o = n;
			p = m + 1;
			while (o <= 9)
			{
				while (p <= 9)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(' ');
					putchar(o + '0');
					putchar(p + '0');
					if (n == 9 && m == 8 && o == 9 && p == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					p++;
				}
				p = 0;
				o++;
			}
			m++;
		}
		m = 0;
		n++;
	}
	return (0);
}

