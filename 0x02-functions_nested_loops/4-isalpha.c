iinclude "main.h"

/**
  * _isalpha - checks if character is alpha.
  * @c: character
  * Return: 0 if not.
  */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
		return (0);
	else
		return (1);
}

