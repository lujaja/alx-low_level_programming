

#include "main.h"


/**
 * _atoi - converts string to inegers
 * @s: string pointer
 * Return: 0 is string cant be converted
 */

int _atoi(char *s)
{
	register int i, len;
	int num;

	len = 0;
	i = 0;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] < 48 || s[i] > 58)
			return (0);
		else
			num = s[i] - 48;
	}
}
