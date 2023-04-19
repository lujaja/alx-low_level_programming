#include <stdlib>
#include "dog.h"

/**
 * init_dog - initializer to the struct dog
 * @d: struct name
 * @name: member name
 * @age: member
 * @owner: member
 */

 void init_dog(struct dog *d, char *name, float age, char *owner)
 {
     if (d == NULL)
        d = malloc(sizeof(struct dog));

     d -> name = name;
     d -> age = age;
     d -> owner;
}
        d = malloc(sizeof(struct dog));

     d -> name = name;
     d -> age = age;
     d -> owner;
}
