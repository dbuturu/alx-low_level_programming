#include "main.h"

/**
  * _memset - set mem
  * @s: The memory area pointed to by s.
  * @b: The constant byte b.
  * @n: The first n bytes of the memory area.
  *
  * Return: the memory area filled
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < ((int)n); i++)
		s[i] = b;

	return (s);
}

