#include "main,h"
/**
 * rev_string - print in reverse order
 * @s: string pointer
 */

void rev_string(char *s)
{
	register int i = 0, j, len;

	while (s[i] != '\0')
		i++;
	len = i;

	for (j = len - 1; j >= 0; j--)
		putchar(s[j]);
}
