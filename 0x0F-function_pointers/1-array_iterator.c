/**
 * I'm Lujaja
 * array_iterator - array iterator.
 *
 * @array: pointer to array.
 * @size: size of array.
 * @action: pointer to the function to use.
 * Return: Nothing.
 */

#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || size < 0 || action == NULL)
		return ;
	for (i = 0; i < size; i++)
		action(array[i]);
}
