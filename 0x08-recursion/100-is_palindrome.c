#include "main.h"
#include <string.h>

int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * check_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to be checked.
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = (int)strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

