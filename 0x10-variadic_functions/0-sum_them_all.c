#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The amount of arguments.
 * Return: Sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int i sum;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

