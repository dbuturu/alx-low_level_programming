#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: The destination memory area.
 * @src: The memory area.
 * @n: The bytes from memory area.
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_pointer = dest;

	while (n--)
		*dest++ = *src++;
	return (dest_pointer);
}

