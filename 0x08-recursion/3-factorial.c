#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 *
 * @n: The number to calculate the factorial
 * Return: The factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}

