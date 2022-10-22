#include "main.h" 

/**
 * strncat - function that concatenates two strings. 
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of byte to be concatenated
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length, j;
/* j is a counter for n byte of src to be concatenated */
/* length = length of destination string */

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
