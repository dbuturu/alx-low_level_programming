#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long fibonacci_0, fibonacci_1, fibonacci_2;

	fibonacci_0 = 1;
	fibonacci_1 = 2;
	fibonacci_2 = 0;
	for (i = 0; i < 50; ++i)
	{
		fibonacci_2 = fibonacci_0 + fibonacci_1;

		printf(", %li", fibonacci_0);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_2;
	}
	putchar('\n');
	return (0);
}

