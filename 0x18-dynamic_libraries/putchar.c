#include "main.h"
/**
 * _putchar - function
 * @c: chaaracter
 *
 * Return: number of charcters
 * Description: prints to stdout
 *
 */
int _putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
	return (1);
}
