/**
 * Lujaja
 * print_dog - Function name.
 * @d: pointer to struct dog.
 * Description - Function to print struct dog.
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

void print_dog(struct dog * d)
{
	if (d == NULL)
		return ;
	else if (d -> name == NULL)
		printf("Name: (nil)\n");
	else if (d -> owner == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\nAge: %f\nOwner: %S\n", d -> name, d -> age, d -> owner);
}
