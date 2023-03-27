


#include "main.h"


/**
 * _atoi - converts string to inegers
 * @s: string pointer
 * Return: 0 is string cant be converted
 */

int _atoi(char *s)
{
	register int i = 0, results = 0, sign;

	while (s[i] != '\0')
	{
		if (s[i] < 48 || s[i] > 57)
		return (0);
		else if (s[i] == 45)
			sign += 1;
		else
		{
			results = results * 10 + (s[i] - 48);
			if (sign % 2 != 0)
				results = -results;
		}
	}
}

