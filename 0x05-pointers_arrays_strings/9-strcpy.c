

#include "main.h"

/**
 * *_strcopy - copy a string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	register int i, len;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\n';
	
	return (dest);
}
