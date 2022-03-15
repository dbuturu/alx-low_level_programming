#include <stdio.h>
#include "main.h"

/**
 *  print_sign-  print_signfunction
 *
 * Description: the  print_signfunction
 * @i: int i
 * Return: 0
 */
int print_sign(int i)
{
	if (i < 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

