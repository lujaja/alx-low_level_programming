/**
 * I'm Lujaja.
 *
 * main - Entry point.
 *
 * Return: Always 0.
 */

#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char * argv[])
{
	char *op;
	int num1, num2;

	if (!(argc == 4))
	{
		printf("%s\n", "Error");
		exit (98);
	}
	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if (get_op_func(op) == NULL)
	{
		printf("%s\n", "Error");
		exit (99);
	}
	if (*op == '/' && argv[3] == 0 || *op == '%' && argv[3] == 0 )
	{
		printf("%s\n", "Error");
		exit (100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
}
