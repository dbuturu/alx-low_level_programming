#include <stdio.h>
#include "main.h"

/**
 * more_numbers - more_numbers function
 *
 * Description: the more_numbers function
 * puts text to stout.
 */

void more_numbers(void)
{
	int c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}

