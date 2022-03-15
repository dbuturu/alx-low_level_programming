#include "0-putchar.h"

/**
 * main - main function
 *
 * Description: the main function
 * puts text to stout.
 * But you're totally free to use several lines to properly
 * Return: 0
 */

int main(void)
{

	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}

