
#include "main.h"

/**
 * print_rev - revers a string
 * @s: string pointer
 * lujaja
 */

void print_rev(char *s)
{
	register int i, j, len;

	i = 0;

	while (s[i] != '\0')
		i++;
	len = i;

	for (j = len - 1; j >= 0; j--)
		putchar(s[j]);
	putchar('\n');
}
