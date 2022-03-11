#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function
 * puts text to stout.
 * But you're totally free to use several lines to properly
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		puts("is positive");
	}
	if(n==0)
	{
		puts("is zero");
	}
	if(n<0)
	{
		puts("is negative");
	}
	return (0);
}
