#include "main.h"

/**
 * _strcpy - copies the content frm a string to another string
 * @dest: Destination string
 * @src: Source string
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
	{
		dest[i] = '\0';
	}

	return (dest);
}
