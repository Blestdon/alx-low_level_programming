#include "dog.h"
#include <stdlib>

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: dog to be initialized
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = ag;
		d->owner = owner;
	}
}

