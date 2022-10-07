#include "main.h"

/**
 * array_range - creates array of integers from min to max
 * @min: minimum numbers in range of numbers
 * @max: maximum number un range of numbers
 * Return: *ptr
 */

int *array_range(int min, int max)
{
	int *ptr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
