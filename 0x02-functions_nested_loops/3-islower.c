#include <stdio.h>
#include <ctype.h>

/**
 * _islower- _islower function
 *
 * Description: the _islower function
 * @c: char c
 * Return: int islower
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

