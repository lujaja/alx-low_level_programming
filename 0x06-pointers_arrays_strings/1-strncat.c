
#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: parmater for dest to append to
 * @src: parameter for src
 * @n: parameter for n
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (*dest)
		a++;

	while (*src && src[b] < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
