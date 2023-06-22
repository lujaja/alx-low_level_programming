/**
 * I'm Lujaja
 *
 * int_index - Function.
 *
 * @array: pointer to an array.
 * @size: number of array elements.
 * @cmp: Function pointer.
 * Return: index to the element
 */

#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size < 0|| cmp == NULL)
		return (-1);
	else
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
		return (-1);
	}
}
