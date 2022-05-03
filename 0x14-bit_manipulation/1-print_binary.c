#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int n_ = 0x00;
	int i = 0;

	do {
		n_ = ((n_ << 1) | (n & 0x01));
		n >>= 1;
		i++;
	} while (n > 0);

	while (i-- > 0)
	{
		_putchar('0' + (n_ & 0x01));
		n_ >>= 1;
	}
}

