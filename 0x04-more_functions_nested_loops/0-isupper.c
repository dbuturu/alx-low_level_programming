#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - _isupper function
 *
 * Description: the _isupper function
 * @c: char c
 * Return: int _isupper
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

