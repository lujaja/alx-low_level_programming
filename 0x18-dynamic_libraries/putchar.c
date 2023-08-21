#include "main.h"
#include <unistd.h>
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
	write(1, &c, 1);
	return (1);
}
