#include "main.h"

/**
 * print_line - entry of program
 * @n: number of times to print '_' character
 * Description: Prints '_' multiple. times to form a line
 * Return: Success
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
