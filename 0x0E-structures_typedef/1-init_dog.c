/**
 * init_dog - Function name
 * @d: pointer to struct dog
 * @name: Functon parameter
 * @age: Function parameter
 * @owner: Function parameter
 * Description - Function to initialize struct dog.
 */

#include "dog.h"
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = (struct dog *) malloc(sizeof(struct dog));
	if (d == NULL)
		return ;
	else
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
