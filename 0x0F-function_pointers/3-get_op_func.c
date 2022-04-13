#include "3-calc.h"
/**
 * get_op_func - Selects the correct function to perform
 * the operation asked by the user.
 * @s: The operator passed as argument to the program.
 * Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op != NULL; i++)
		if (*ops[i].op == *s)
			return (ops[i].f);
	return (0);
}

