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

	i = 0;
	fibonacci_0 = 1;
	fibonacci_1 = 2;
	fibonacci_2 = 0;

	while (fibonacci_1 < 4000000)
	{
		fibonacci_2 = fibonacci_0 + fibonacci_1;
		printf("%li, ", fibonacci_0);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_2;
		++i;
	}
	printf("%li", fibonacci_0);
	putchar('\n');
	return (0);
}

