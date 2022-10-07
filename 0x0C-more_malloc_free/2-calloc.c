#include "main.h"

/**
 * _concat - uses malloc to assign dynamic memory for an array
 * @nmemb: array of elements
 * @size: size of each element of memory allocated
 * Return: ptr
 */

void *_concat(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
	{
		return (0);
	}
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (0);
	/*sets all members of array to zero and evaluates type dynamically */
	for (i = 0; i < nmemb; i++)
	{
		switch (size)
		{
		case 8:
			*((long *) ptr + i) = 0;
			break;
		case 4:
			*((int *) ptr + i) = 0;
			break;
		case 2:
			*((short *) ptr + i) = 0;
			break;
		case 1:
			*((char *) ptr + i) = 0;
			break;
		}
	}
	return (ptr);
}
