
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

	while (dest != '\0')
		a++;
	a += 1;

	while (src[b] < n)
	{
		dest[a] = src[b];
	}
	return (dest);
}
