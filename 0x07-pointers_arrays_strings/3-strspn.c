#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: number to bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				res++;
				break;
			} else if (accept[i + 1] == '\0')
				return (res);

		}

		s++;
	}
	return (res);
}

