#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print_to_98 function
 *
 * Description: the print_to_98 function
 * puts text to stout.
 * @n: int n
 * Return: void
 */

void print_to_98(int n) {
	int i;

	if (n < 98) {
		for (i = n; i < 98; i++) {
			printf("%d, ", i);
		}
	} else {
		for (i = n; i > 98; i--) {
			printf("%d, ", i);
		}

	}
	printf("%d\n", 98);
}

