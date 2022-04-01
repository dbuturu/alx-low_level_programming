#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: Arguement count.
 * @argv: Array of pointers to arguement strings.
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}

