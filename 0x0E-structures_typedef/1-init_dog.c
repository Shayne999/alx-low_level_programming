#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialisez a variable of type struct dog
 * @d: structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner= owner;
	}
}
