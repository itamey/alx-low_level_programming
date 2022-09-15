#include "main.h"

/**
 * print_line - entry of program
 * @a: number of times to print '_' character
 * Description: Prints '_' multiple. times to form a line
 * Return: Success
 */

void print_line(int a)
{
	while (a > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
