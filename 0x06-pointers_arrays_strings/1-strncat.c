#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concatenates part of a string to another string
 * @dest: Target of concatenation
 * @src: Source of characters to concatenate
 * @n: Number of characters to concatenate
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int length;
	int i;

	length = _strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';

	return (dest);
}