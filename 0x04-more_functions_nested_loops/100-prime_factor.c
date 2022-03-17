#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function
 * puts text to stout.
 * Return: 0
 */


int main(void)
{
	long i;
	long n = 612852475143;

	for (i = 2; i < n; ++i)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%li\n", n);
	return (0);
}

