#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase.
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');

	return (void);
}
