#include <stdio.h>

/**
 * print_array - print array
 *
 * @a: int *a
 * @n: int n
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		else if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
