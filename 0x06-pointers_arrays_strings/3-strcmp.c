#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcat - concat string.
 *
 * @src: The source.
 * @dest: The destination.
 * Return: The pointer to dest.
 */

int _strcmp(char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return ((unsigned int)*s1 - (unsigned int)*s2);
}

