#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: The bit.
 * @index: The index.
 * Return:the value of the bit at index index or -1 if an error occuredd.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= (sizeof(unsigned long int) * CHAR_BIT))
		return (-1);

	*n |= (0x01 << index);

	return (1);
}

