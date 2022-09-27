#include "main.h"

/**
 * _strpbrk -returns the pointer to a byte in s
 * that matches any of the byte in accept
 * @s: string to be checked for the occurrence in accept
 * @accept: string containing the byte to be searched for
 * Return: pointer to the firat occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		s++;
	}

	return (0);
}

