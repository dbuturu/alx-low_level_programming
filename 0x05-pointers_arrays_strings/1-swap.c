/**
 * swap_int - swap int a and b
 *
 * @a: int a
 * @b: int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

