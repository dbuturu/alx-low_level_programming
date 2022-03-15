#include <stdio.h>

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
		putchar('+');
		return (+1);
	}
	else if (i == 0)
	{
		putchar('0');
		return (00);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

