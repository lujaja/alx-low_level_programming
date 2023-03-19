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
putchar(alpha);
alpha++;
if (alpha == 'q' || alpha == 'e')
alpha++;
}
putchar('\n');
return (0);
}
