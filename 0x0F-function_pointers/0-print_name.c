#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name to a screen
 * @name: string parameter
 * @f: pointer to a function that takes string argument that returns nothing
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
