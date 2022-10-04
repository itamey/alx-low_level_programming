#include "main.h"

unsigned int get_length(char *s);

/**
 * _strdup - copies the content of a string to another location in memory
 * @str: string to copy
 * Return: 0 or *ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int size;

	if (str == 0)
	{
		return (0);
	}

	size = get_length(str);
	ptr = (char *) malloc((sizeof(char) * size) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[size] = '\0';

	return (ptr);
}

/**
 * get_length - gets length of a string
 * @s: string parameter
 * Return: length of s
 */

unsigned int get_length(char *s)
{
	unsigned int length;
	unsigned int i;

	i = 0;
	length = 0;
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
