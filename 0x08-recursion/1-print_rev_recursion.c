#include "main.h"

/**
 * _prints_rev_recursion - print a strung in reverse
 * @s: string to print
 * Return: void
 */

void _prints_rev_recursion(char *s)
{
	char letter;

	if (*s == '\0')
	{
		return;
	}
	else
	{
		letter = *s;
		s++;
		_prints_rev_recursion(s);
		_putchar(letter);
	}
}
