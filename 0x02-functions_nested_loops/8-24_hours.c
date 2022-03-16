#include "main.h"
#include <stdlib.h>
/**
 * jack_bauer- jack_bauer function
 *
 * Description: the jack_bauer function
 * puts text to stout.
 * Return: void
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes= 0;

	for (hours=0;hours<=24; ++hours)
	{
		for (minutes=0;minutes<=24; ++minutes)
		{
			_putchar('0' + (hours / 10));
			_putchar('0' + (hours % 10));
			_putchar(':');
			_putchar('0' + (minutes/ 10));
			_putchar('0' + (minutes% 10));
			_putchar('\n');
		}
	}
}

