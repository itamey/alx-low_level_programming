#include "main.h"
#include "9-strcpy.c"

/**
 * _strcat - adds the content of a string to another string
 * @dest: Destination string
 * @src: Source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int initial_end;
	int j;

	initial_end = _strcpy(dest);
	j = 0;
	while (src[i] != '\0')
	{
		dest[initial_end + j] = src[j];
		j++;
	}
	dest[initial_end + j] = '\0';

	return (dest);
}
