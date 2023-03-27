

#include "main.h"


/**
 * _atoi - converts string to inegers
 * @s: string pointer
 * Return: 0 is string cant be converted
 */

int _atoi(char *s)
{
	register int i, results = 0;

	for (i = 0;i < s[i] != '\0'; i++)
	{
		if (s[i] < 48 || s[i] > 58)
		return (0);

		else
			results = results * 10 + (s[i] - 48);
		if (i == '\0')
			break;
	}
}
