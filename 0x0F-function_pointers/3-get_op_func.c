#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function
 * @s: The operator passed as an argument to the program.
 *
 *Return: Pointer to the function that corresponds
 *or NULL.
 *
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (0);
}
