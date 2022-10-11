#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees up a memory used by dynamically allocated struct
 * @d: pointer to an instance of structure dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free (d->name);
	free (d->owner);
	free (d);
}
