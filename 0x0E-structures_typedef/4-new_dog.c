/**
 * I'm Lujaja
 * new_dog - Function name.
 * @name: Function parameter
 * @age: Function parameter
 * @owner: Function parameter
 * Description - Function that creates a new dog.
 */

#include "dog.h"
#include <string.h>
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int l1, l2;

	for (l1 = 0; name[l1]; l1++);
	for (l2 = 0; owner[l2]; l2++);
	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d -> name = (char *) malloc(sizeof(char) * l1);
	if (d -> name == NULL)
	{
		free(d);
		return (NULL);
	}
	d -> owner = (char *) malloc(sizeof(char) * l2);
	if (d ->owner == NULL)
	{
		free(d);
		free(d -> name);
		return (NULL);
	}
	strcpy(d -> name, name);
	strcpy(d -> owner, owner);
	d -> age = age;
	return (d);
}
