#include <stdlib>
#include "dog.h"

/**
  * I am lujaja
  * free_dog - free the memory
  * @d: structure to free
  *
  */

 void free_dog(dog_t *d) 
{
	if (d)
	{
		free(d -> name);
		free(d -> owner);
		free(d);
	}
}
