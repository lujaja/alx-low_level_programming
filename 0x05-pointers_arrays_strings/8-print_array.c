



#include "main.h"

/**
 * print_array - prints array of numbers
 * @a: pointer to an array
 * @n: variable
 */

void print_array(int *a, int n)
{
	register int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
