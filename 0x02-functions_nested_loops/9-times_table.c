#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int column, row, product;

	for (column = 0; column <= 9; column++)
	{
		_putchar(column);
	}
	for (row = 0; row <= 9; row++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(row);
		_putchar('\n');
		
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			_putchar(product + '0');
		}
		_putchar('\n');

	}
}
