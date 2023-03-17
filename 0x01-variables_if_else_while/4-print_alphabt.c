#include <stdio.h>

/**
 * main - entry point
 * Return: return 0 always (success)
 */

int main(void)
{
char alpha = 'a';

while (alpha <= 'z')
{
	if (alpha == 'q')
		continue;
	else if (alpha == 'e')
		continue;
putchar(alpha);
alpha++;
}
putchar('\n')
return (0);
}
