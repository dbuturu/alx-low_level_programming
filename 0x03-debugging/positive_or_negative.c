#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - positive_or_negative function
 *
 * Description: the positive_or_negative function
 * puts text to stout.
 * @i: int i
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
}

