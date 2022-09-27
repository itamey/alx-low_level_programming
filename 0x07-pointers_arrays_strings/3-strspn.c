#include "main.h"

/**
 * _strspn -returns the size of an initial segment of a string
 * @s: string to be checked
 * @accept: string to use and check
 * Return: @count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}

	return (count);
}

