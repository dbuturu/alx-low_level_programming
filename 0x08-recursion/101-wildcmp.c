#include <stdio.h>

/**
 * wildcmp - Compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0.
 *
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 * Return:1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s, char *pat)
{
	if (*pat == '*')
	{
		if (!*s && pat[1])
			return (0);
		if (wildcmp(s, pat + 1))
			return (1);
		else if (wildcmp(s + 1, pat))
			return (1);
		else
			return (0);
	}
	else if (*s != *pat)
		return (0);
	if (!*s)
		return (1);
	return (wildcmp(s + 1, pat + 1));
}

