

#include "main.h"


/**
 * _atoi - converts string to inegers
 * @s: string pointer
 * Return: 0 is string cant be converted
 */

int _atoi(char *s)
{
	register int i, len;
	int digit, sign, num, terminator;

	i = sign = num = len = terminator = digit = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && terminator == 0)
	{
		if (s[i] == '-')
			++sign;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2 != 0)
				digit = -digit;
			num = num * 10 + digit;
			terminator = 1;
			if (s[i] < '0' || s[i] > '9')
				break;
			terminator = 0;
		}
		i++;
	}
	if (terminator == 0)
		return (0);
	return (num);
}
