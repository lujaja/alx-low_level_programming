/**
 * I'm Lujaja.
 *
 * get_op_func - get operator function.
 *
 * @s: pointer to operator.
 * Return: pointer to selected function.
 */

#include "3-calc.h"

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
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
