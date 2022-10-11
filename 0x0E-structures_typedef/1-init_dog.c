#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes the details of dog
 * @d: pointer to an instance of structure dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
