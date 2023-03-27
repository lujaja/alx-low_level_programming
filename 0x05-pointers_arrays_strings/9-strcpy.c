

#include "main.h"

/**
 * *_strcopy - copy a string
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcopy(char *dest, char *src)
{
	register int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\n';
}
