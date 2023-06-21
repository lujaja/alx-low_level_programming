/**
 * I'm Lujaja
 * free_dog - Function name.
 * @d: pointer to dog_t data type.
 * Description - Function to free dogs
 */

#include "dog.h"

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d -> name);
		free(d -> owner);
		free(d);
	}
}
