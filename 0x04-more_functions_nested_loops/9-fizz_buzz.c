#include <stdio.h>

/**
 *  main-  main function
 *
 * Description: the main function
 * puts text to stout.
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; ++i)
	{
		if (i == 1)
		{
			printf("%d", i);
			continue;
		}
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else
			printf(" %d ", i);
	}
	putchar('\n');
	return (0);
}

