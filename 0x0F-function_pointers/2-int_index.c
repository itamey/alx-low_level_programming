#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: collection of elements to searvh from
 * @size: size of array
 * @cmp: pointer to function that takes int arguement and returns int
 * Return: index of element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (0);
}
