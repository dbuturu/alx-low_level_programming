#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) ac, char *av[])
{
	char password[7], *codex;
	int length = strlen(av[1]), i, buff;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	buff = (length ^ 59) & 63;
	password[0] = codex[buff];

	buff = 0;
	for (i = 0; i < length; i++)
		buff += av[1][i];
	password[1] = codex[(buff ^ 79) & 63];

	buff = 1;
	for (i = 0; i < length; i++)
		buff *= av[1][i];
	password[2] = codex[(buff ^ 85) & 63];

	buff = 0;
	for (i = 0; i < length; i++)
	{
		if (av[1][i] > buff)
			buff = av[1][i];
	}
	srand(buff ^ 14);
	password[3] = codex[rand() & 63];

	buff = 0;
	for (i = 0; i < length; i++)
		buff += (av[1][i] * av[1][i]);
	password[4] = codex[(buff ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		buff = rand();
	password[5] = codex[(buff ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
