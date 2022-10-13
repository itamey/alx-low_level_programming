#include "main.h"
#include <stdlib.h>

/**
 * array_iterator - appliea a soecific action to a collection of elements
 * @array: an array
 * @size: size of an array
 * @action: pointer to a function that tajes
 * an int argument and returns nothing
 * Return: void
 */

void array_iterator(int	*array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		for (i = 0; i < size; i++)
		action(array[i]);
}
