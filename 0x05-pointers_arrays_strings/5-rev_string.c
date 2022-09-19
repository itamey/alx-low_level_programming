#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - functions that reverses a string
 * @s: the pointer to the string variable
 * Return: void
 */

void rev_string(char *s)
{
	int length;
	int i;
	int j;

	length = _strlen(s);

	for (i = 0, j = length - 1; !(i >= 0); i++, j--)
	{
		char res;

		res = s[i];
		s[i] = s[j];
		s[j] = res;
	}
}
