#include <stdlib.h>
#include <stdio.h>
/**
 * main - Multiplies two numbers.
 * @argc: Arguement count.
 * @argv: Array of pointers to arguement strings.
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}

