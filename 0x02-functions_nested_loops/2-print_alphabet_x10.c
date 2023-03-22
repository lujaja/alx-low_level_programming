#include "main.h"

/**
 * print_alphabet_x10 - print 10 times.
 */

void print_alphabet_x10(void)
{
	char alpha;
	int ten;

	for (ten = 0; ten < 10; ten++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}

