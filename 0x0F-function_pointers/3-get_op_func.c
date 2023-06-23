/**
 * I'm Lujaja.
 *
 * get_op_func - get operator function.
 *
 * @s: pointer to operator.
 * Return: pointer to selected function.
 */

#include "3-calc.h"
#include <string.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	i = 0;
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);	
}
