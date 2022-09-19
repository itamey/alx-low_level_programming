#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - functions that prints a string in reverse folowed by a new line
 * @s: the pointer to the string variable
 * Return: void
 */

void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s);
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
