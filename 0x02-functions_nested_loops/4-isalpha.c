#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha-  _isalphafunction
 *
 * Description: the  _isalphafunction
 * @c: char c
 * Return: int _isalpha
 */

int _isalpha(char c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

