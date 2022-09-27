#include "main.h"

/**
 * _strlen - entry of program
 * @s: string whose length is to be returned
 * Description: This program returns the length of a string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (s[i] != '\0')
	{
		++length;
		i++;
	}

	return (length);
}
