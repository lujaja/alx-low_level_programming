#include "main.h"

/**
  * print_square - using hash
  *
  * @size: size of square
  */

void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				putchar('#');

			if (hgt == size - 1)
				continue;
			putchar('\n');
		}
	}

	putchar('\n');
}
