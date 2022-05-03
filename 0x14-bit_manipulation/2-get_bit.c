#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The bit.
 * @index: The index.
 * Return:the value of the bit at index index or -1 if an error occuredd.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	return ((n >> index) & 0x01);
}

