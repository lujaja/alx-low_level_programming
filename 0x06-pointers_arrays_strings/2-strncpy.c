


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
	char *p = dest;
	int count = 0;

	while (count < n)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
			*dest = *src;
		dest++;
		count++;
	}
	return (p);
}
