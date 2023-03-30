
#include "main.h"

/**
 * *_strcat - copies a string to the end of other string
 * @dest: append to
 * @src: string to be appended
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*dest)
	{
		i++;
	}

	while (*src)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
