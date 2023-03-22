#include "main.h"
/**
 * main - prints _putchar and a newline
 * Return: 0 always success
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
