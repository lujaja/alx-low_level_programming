#include "main.h"

/**
 * *_strcat - copies a string to the end of other string
 * @dest: append to
 * @src: string to be appended
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		if (src[i] == '\0')
			break;
		dest[len] = '\0';
		len++;
		i++;
	}
	return (dest);
}
