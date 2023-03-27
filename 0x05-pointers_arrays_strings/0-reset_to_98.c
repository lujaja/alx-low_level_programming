
#include "main.h"

/**
 * reset_to_98 - updates the value of variable n to 98.
 * @n: variable
 * lujaja
 */

void reset_to_98(int *n)
{
	int *ptr_n;

	ptr_n = &n;

	*ptr_n = 98;
}
