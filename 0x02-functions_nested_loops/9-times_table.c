#include "main.h"
#include <stdlib.h>
/**
 * times_table - times_table function
 *
 * Description: the times_table function
 * puts text to stout.
 * @i: int i
 * Return: last_digit
 */

void times_table(void)
{
	int x, y, z, tens, ones;

	for (x = 0; x < 10; ++x)
	{
		for (y = 0; y < 10; ++y)
		{
			z = y * x;
			if (z < 10)
			{
				_putchar(z +'0');
			}
			else
			{
				tens = (z / 10);
				ones = (z % 10);
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			if (y != 9)
			{
				_putchar(',');
				if (z < 10){
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

