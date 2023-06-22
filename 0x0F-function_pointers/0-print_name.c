/**
 * Lujaja
 * print_name - print name
 *
 * @name: name of person.
 * @f: Function pointer.
 * Return: Nothing.
 */

#include "function_pointers.h"

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return ;
	else
		f (name);
}
