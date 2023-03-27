



#include "main.h"
/**
 * rev_string - print in reverse order
 * @s: string pointer
 */

void rev_string(char *s)
{
	register int begin, end, count = 0;
	char rev;

	while (s[count] != '\0')
		count++;
	end = count - 1;

	for (begin = 0; begin < count; begin++)
	{
		rev = s[begin];
		s[begin] = s[end];
		s[end--] = rev;
	}
}
