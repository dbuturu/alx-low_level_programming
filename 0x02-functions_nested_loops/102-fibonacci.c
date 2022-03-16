#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void) {
  int i, *fibonacci;

  fibonacci = [ 1, 2 ];
  for (i = 0; i <= 50; ++i) {
    fibonacci[i + 2] = fibonacci[i] + fibonacci[i + 1];
    printf("%d", fibonacci[i]);
  }
  printf("%d\n", sum);
  return (0);
}
