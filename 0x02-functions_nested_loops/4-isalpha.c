#include "main.h"

/**
  * _isalpha - checks if character is alpha.
  * @c: character
  * Return: 0 if not.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C >= 'Z'))
		return (1);
	else
		return (0);
}

