#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: Arguement count.
 * @argv: Array of pointers to arguement strings.
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int i, n, amount, coins = 0;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 1)
		printf("0\n");
	else
	{
		for (i = 0; i < 5 && amount; i++)
		{
			n = amount / coin[i];
			coins += n;
			amount -= n * coin[i];
		}
		printf("%d\n", coins);
	}
	return (0);
}

