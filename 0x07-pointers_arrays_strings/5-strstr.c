#include "main.h"

/**
 * _strstr - returns the location of a given substring in a string
 * @haystack: string to search
 * @needle: substring to search for with @haystack
 * Return: pointer to @needle with @haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2;

	while (*haystack != '\0')
	{
		str1 = haystack;
		str2 = needle;

		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
		{
			return (str1);
		}
		haystack = str1 + 1;
	}

	return (0);
}

