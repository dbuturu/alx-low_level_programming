#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Adds positive numbers.
 * @argc: Arguement count.
 * @argv: Array of pointers to arguement strings.
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum;
	char *x;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			x = argv[i];

			for (j = 0; j < strlen(x); j++)
			{
				if (x[j] < 48 || x[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(x);
		}

	}

	printf("%d\n", sum);
	return (0);
}

