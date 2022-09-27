#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search within
 * @c: character to searvh for within s
 * Return: @s or null depending on what character is found
 */

char *_strchr(char *s, char c)
{
	while (*s != '0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
