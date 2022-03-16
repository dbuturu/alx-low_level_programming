#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	float fibonacci_0, fibonacci_1, fibonacci_2;

	fibonacci_0 = 1;
	fibonacci_1 = 2;
	fibonacci_2 = 0;
	for (i = 0; i < 98; ++i)
	{
		fibonacci_2 = fibonacci_0 + fibonacci_1;
		if (fibonacci_0 == 1)
			printf("%.0f", fibonacci_0);
		else
			printf(", %.0f", fibonacci_0);
		fibonacci_0 = fibonacci_1;
		fibonacci_1 = fibonacci_2;
	}
	putchar('\n');
	return (0);
}

