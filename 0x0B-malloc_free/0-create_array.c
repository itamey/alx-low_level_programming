#include "main.h"

/**
 * create-array - creates an array of characters
 * @size: number of elements in the array
 * @c: character used to set all the memory allocation in the created array
 * Return: 0 or *ptr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size > 0)
	{
		arr = (char *) malloc(sizeof(char) * size);
		if (arr == 0)
		{
			return (0);
		}
		for (i = 0, size > i; i++)
		{
			arr[i] = c;
		}
	}
	else
	{
		return (0);
	}
	return (arr);
}
