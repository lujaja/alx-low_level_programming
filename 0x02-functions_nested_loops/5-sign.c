#include "main.h"

/**
  * print_sign - checks whether a number is positve, negative or zero.
  *
  * @n: character.
  *
  * Return: 1 is its positve, 0 if n is zero and -1 if negative.
  */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
