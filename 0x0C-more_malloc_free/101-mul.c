#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int find_len(char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_poduct(char *poduct, char *mult, int digit, int zeroes);
void add_nums(char *final_poduct, char *next_poduct, int next_len);

/**
 * find_len - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */
int find_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_xarray - Creates an array of chars and initializes it with
 * the character 'x'. Adds a terminating null byte.
 * @size: The size of the array to be initialized.
 * Return: A pointer to the array.
 */
char *create_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1) index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * iterate_zeroes - Iterates through a string of numbers containing
 * leading zeroes until it hits a non-zero number.
 * @str: The string of numbers to be iterate through.
 * Return: A pointer to the next non-zero element.
 */
char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - Converts a digit character to a corresponding int.
 * @c: The character to be converted.
 * Return: The converted int.
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_poduct - Multiplies a string of numbers by a single digit.
 * @poduct: The buffer to store the result.
 * @mult: The string of numbers.
 * @digit: The single digit.
 * @zeroes: The necessary number of leading zeroes.
 */
void get_poduct(char *poduct, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*poduct)
	{
		*poduct = 'x';
		poduct++;
	}

	poduct--;

	while (zeroes--)
	{
		*poduct = '0';
		poduct--;
	}

	for (; mult_len >= 0; mult_len--, mult--, poduct--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*poduct = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*poduct = (tens % 10) + '0';
}

/**
 * add_nums - Adds the numbers stored in two strings.
 * @final_poduct: The buffer storing the running final poductuct.
 * @next_poduct: The next poductuct to be added.
 * @next_len: The length of next_poduct.
 */
void add_nums(char *final_poduct, char *next_poduct, int next_len)
{
	int num, tens = 0;

	while (*(final_poduct + 1))
		final_poduct++;

	while (*(next_poduct + 1))
		next_poduct++;

	for (; *final_poduct != 'x'; final_poduct--)
	{
		num = (*final_poduct - '0') + (*next_poduct - '0');
		num += tens;
		*final_poduct = (num % 10) + '0';
		tens = num / 10;

		next_poduct--;
		next_len--;
	}

	for (; next_len >= 0 && *next_poduct != 'x'; next_len--)
	{
		num = (*next_poduct - '0');
		num += tens;
		*final_poduct = (num % 10) + '0';
		tens = num / 10;

		final_poduct--;
		next_poduct--;
	}

	if (tens)
		*final_poduct = (tens % 10) + '0';
}

/**
 * main - Multiplies two positive numbers.
 * @argv: The number of arguments.
 * @argc: An array of pointers to the arguments.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *final_poduct, *next_poduct;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_poduct = create_xarray(size + 1);
	next_poduct = create_xarray(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_poduct(next_poduct, argv[1], digit, zeroes++);
		add_nums(final_poduct, next_poduct, size - 1);
	}
	for (index = 0; final_poduct[index]; index++)
	{
		if (final_poduct[index] != 'x')
			putchar(final_poduct[index]);
	}
	putchar('\n');

	free(next_poduct);
	free(final_poduct);

	return (0);
};

