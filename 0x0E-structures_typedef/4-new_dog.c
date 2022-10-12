#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

char *_strdup(char *str);

/**
 * new_dog - returns a new unstanc eof strct dog
 * @name: name of dog
 * @age: dog age
 * @owner: owner's name
 * Return: d_ptr
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d_ptr;
	char *t_name, *t_owner;

	d_ptr = malloc(sizeof(dog_t));
	if (d_ptr == NULL)
		return (NULL);

	t_name = _strdup(name);
	if (t_name == NULL)
	{
		free(d_ptr);
		return (NULL);
	}
	d_ptr->name = name;

	d_ptr->age = age;

	t_owner = _strdup(owner);
	if (t_owner == NULL)
	{
		free(d_ptr->name);
		free(d_ptr);
		return (NULL);
	}
	d_ptr->owner = owner;

	return (d_ptr);
}

/**
 * _strdup - returns the duplicate of string in memory
 * @str: string parameter
 * Return: duplicate of @str
 */

char *_strdup(char *str)
{
	char *ptr;
	int size, i;

	if (str == NULL)
		return (NULL);

	size = 0;
	for (i = 0; str[i] = '\0'; i++)
		size++;

	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] = '\0'; i++)
		ptr[i] = str[i];

	ptr[size] = '\0';
	return (ptr);
}
