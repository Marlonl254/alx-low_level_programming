#include <stdlib.h>
#include "dog.h"

/**
* init_dog - this func initializes a var of type struct dog
* @d: the pointer
* @name: the name
* @age: the age
* @owner: the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

