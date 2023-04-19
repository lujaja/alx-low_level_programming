#include "dog.h"
#include <stdio.h>
#include <stdlib>


/**
 * new_dog - function to create new struct dog data type
 * @name: member
 * @age: age
 * @owner: member
 * Description - no longer description available
 */


 dog_t *new_dog(char * name, float age, char * owner)
 {
     dog_t *dog;
     int len1, len2;


    len1 = _strlen(name);
    len2 = _strlen(owner);

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    dog -> name = malloc(sizeof(char) * (len1 + 1));
    if (dog -> name == NULL )
    {
        return (NULL);
        free(dog -> name);
    }

    dog -> owner = malloc(sizeof(dog_t) * (len2 + 1));
    if (dog -. onwer == NULL)
    {
        return (NULL);
        free(dog -> onwer);
    }

    free(dog);

    _strcpy(dog -> name, name);
    _strcpy(dog -> onwer, owner);
    dog -> age = age;

    return (dog);
}
