#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints number seperated by a character to a screen
 * @n: number of elements to print
 * @seperator: string to use to seperate the numbers in a list
 * Return: @n
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i < n - 1)
		{
			if (seperator)
				printf("%s", seperator);
		}
	}

	va_end(args);
	printf("\n");
}
