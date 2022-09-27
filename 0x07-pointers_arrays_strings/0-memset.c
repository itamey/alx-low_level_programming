#include "main.h"

/**
 * _memset - fills a memory buffer witha constant byte or chatacter
 * @s: Pointer to the byte buffer
 * @b: constant byte
 * @n: number of buffer spaces to fill
 * Return: @s
 */

int _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
