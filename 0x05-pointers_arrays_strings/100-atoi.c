


#include "main.h"


/**
 * _atoi - converts string to inegers
 * @s: string pointer
 * Return: 0 is string cant be converted
 */

int _atoi(char *s)
{
	register int i, len;
	int num, terminator;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] < 48 || s[i] > 58)
			terminator = 0;
		else if
			num = s[i] - 48;
		else
			return (terminator);
	}
}
