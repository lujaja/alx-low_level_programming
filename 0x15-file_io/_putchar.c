#include "main.h"
/**
 * _putchar - Function
 *
 * @c: character to output
 * Return: number of characters outputed
 *
 */
int _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
	
	return (1);
}
