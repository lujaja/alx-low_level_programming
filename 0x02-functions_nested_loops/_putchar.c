#include <main.h>
#include <stdio.h>

/**
 * _putchar -writes the characher c to standard output
 * @c: the character to print
 *
 * Return: o success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
