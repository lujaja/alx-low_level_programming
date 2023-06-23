#include "function_pointers.h"

/**
 * Lujaja
 * print_name - print name
 *
 * @name: name of person.
 * @f: Function pointer.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}