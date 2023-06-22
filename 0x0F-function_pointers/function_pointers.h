/**
 * I'm lujaja
 * Functions prototype header files
 */

#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * display - Display Function.
 * @c: Function argument
 * Return: Nothing.
 */

void display(char *c)
{
	printf("%s\n", c);
}
void (*f)(char *) = display;

/**
 * Function prototypes.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
