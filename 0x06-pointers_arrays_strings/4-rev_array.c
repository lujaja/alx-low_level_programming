

#include "main.h"
/**
 * reverse_array - function that array numbers
 * @a: paramater for array
 * @n: paramater for array count
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
