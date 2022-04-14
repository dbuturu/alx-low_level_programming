#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int i;

	va_start(valist, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && i < (int)n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}

