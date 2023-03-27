
#include "main.h"

/**
 * puts - prints every other character of a string
 * @str: pointer
 */

void puts(char *str)
{
	register int interval, count = 0;

	while (str[count] != '\0')
		count++;

	for (interval = 0; interval < count; interval += 2)
		puts(str[interval]);
	putchar('\n');
}
