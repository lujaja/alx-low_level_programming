
#ifndef DOG_H
#define DOG_H


/**
 * struct god - user defined data type
 * @name: first member
 * @owner: second member
 * @age" third member
 *
 * Description: this user defined data types contains the difition for the dog
 */

struct dog
{
	char * name;
	float age;
	char * owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
