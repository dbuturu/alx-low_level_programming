#include "main.h"
#include <stdlib.h>
/**
 * times_table - times_table function
 *
 * Description: the times_table function
 * puts text to stout.
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, z, hundreds, tens, ones;

	if (n >= 0 && n <= 15)
		for (x = 0; x < n; ++x)
		{
			for (y = 0; y < n; ++y)
			{
				z = y * x;
				if (y != 0)
				{
					_putchar(',');
					if (z < 10)
					{
						_putchar(' ');
						_putchar(' ');
					} else if (z < 100)
					{
						_putchar(' ');
					}
					_putchar(' ');
				}
				if (z < 10)
				{
					_putchar(z + '0');
				} else if (z < 100)
				{
					tens = (z / 10);
					ones = (z % 10);
					_putchar(tens + '0');
					_putchar(ones + '0');
				} else
				{
					hundreds = (z / 100);
					tens = z / 10 % 10;
					ones = (z % 10);
					_putchar(hundreds + '0');
					_putchar(tens + '0');
					_putchar(ones + '0');
				}
			}
			_putchar('\n');
		}
}

