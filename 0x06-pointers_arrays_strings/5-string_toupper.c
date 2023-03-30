

#include "main.h"
/**
 * *string_toupper - function that compares two strings
 * @string: paramater for array
 * Return: Always 0.
 */
char *string_toupper(char *string)
{
	int upper = 'a' - 'A';

	while (*string)
	{
		if (*string >= 'a' && *string <= 'z')
			*string -= upper;
		string++;
	}
	return (string);
}
