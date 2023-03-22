#include "main.h"

/**
 * _ islower - check if a character is lower case.
 *
 * @c: character
 *
 * Return: if not.
 */

int _islower(int c)
{

	if (!(c >= 65 && <= 90))
		return (1);
	else
		return (0);
}
