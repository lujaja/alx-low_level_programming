

#include "main.h"
/**
 * _strncpy - check the code for Holberton School students.
 * @src: parameter to a src to copy
 * @dest: parameter for dest
 * @n: parameter for number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count != n)
	{
		*dest++ = *src++;
		count++;
		if (*src == '\0')
			break;
		dest++ = '\0';
	}
	return (dest);
}
