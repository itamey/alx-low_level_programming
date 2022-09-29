#include "main.h"

/**
 * _print_rev_recursion - print a strung in reverse
 * @s: string to print
 * Return: void
 */

void _print_rev_recursion(char *s)
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
		_print_rev_recursion(s);
		_putchar(letter);
	}
}
