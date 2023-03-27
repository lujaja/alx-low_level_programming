
#include "main.h"

/**
 * _strlen - lenth of  string
 * @s: pointer
 * lujaja
 * Return: total number of strings
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
