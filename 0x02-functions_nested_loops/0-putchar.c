#include <main.h>
/**
 * main - entry
 * Return: 0 always success
 */

int main(void)
{
	char *lujaja = "_putchar";

	while (*lujaja)
	{
		_putchar(*lujaja);
		lujaja++;
	}
	_putchar('\n');

	return (0);
}
