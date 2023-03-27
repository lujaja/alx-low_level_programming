

#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer
 */

void puts2(char *str)
{
	register int interval, count = 0;

	while (str[count] != '\0')
		count++;

	for (interval = 0; interval < count; interval += 2)
		putchar(str[interval]);
	putchar('\n');
}
