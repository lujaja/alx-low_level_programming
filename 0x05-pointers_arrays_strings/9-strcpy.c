

#include "main.h"

/**
 * *_strcpy - copy a string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	register int i, len;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
