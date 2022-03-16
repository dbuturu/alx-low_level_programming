#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fibonacci_0, fibonacci_1, fibonacci_2;

	fibonacci_0 = 1;
	fibonacci_1 = 2;
	fibonacci_2 = 0;
	for (i = 0; i < 98; ++i)
	{
		fibonacci_2 = fibonacci_0 + fibonacci_1;
		if (fibonacci_0 == 1)
			printf("%lu", fibonacci_0);
		else
			printf(", %lu", fibonacci_0);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_2;
	}
	putchar('\n');
	return (0);
}

