#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_times_table - print_times_table function
 *
 * Description: the print_times_table function
 * puts text to stout.
 * @n: int n
 * Return: void
 */

void print_times_table(int n)
{
	int x, y, z;

	if (n >= 0 && n <= 15)
		for (x = 0; x <= n; ++x)
		{
			for (y = 0; y <= n; ++y)
			{
				z = y * x;
				if (y == 0)
				{
					printf("%d", 0);
					continue;
				}
				if (z < 10)
				{
					printf(",   %d", z);

				} else if (z < 100)
				{
					printf(",  %d", z);
				} else
				{
					printf(", %d", z);
				}
			}
			putchar('\n');

		}
}

