#include <stdio.h>
#include <stdlib>
#include "dog.h"

/**
 * I am  lujaja
 *
 * print_dog - prints the contents of struct dog
 * @d: pointer tob struct to print
 */

 void print_dog(struct dog *d)
 {
     if (d == NULL)
        return;
     if (d -> name == NULL)
        d -> name = "(nil)";
     if (d -> age == NULL)
        d -> age = "(nil)";
     if (d -> owner == NULL)
        d -> owner = "(nil)";

     printf("Name: %s\nAge: %f\nOwner%s\n", d -> name, d -> age, d -> owner);
 }
