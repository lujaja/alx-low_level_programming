#include "main.h"

/**
 * print_to_98 - print all number from n to 98
 * @n: integer
 */

void print_to_98(int n)
{
	while ((n < 99) || (n > 97))
	{
		while (n < 99)
		{
			_putchar(n + '0');
			n++;
		}
		_putchar('\n');
			
		while (n > 97)
		{
			_putchar(n '0');
			n--;
		}
		putchar('\n');
	}
}

