#include "main.h"

/**
  * more_numbers - print 10 times 0 to 14
  *
  */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			putchar(j + '0');
		putchar('\n');
	}
}
