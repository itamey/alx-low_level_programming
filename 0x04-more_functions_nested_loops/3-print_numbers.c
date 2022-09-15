#include "main.h"

/**
 * print_numbers - entry of program
 * Description: Prints the number 0 to 9
 * Return: success
 */

void print_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
		_putchar('0' + a);
		a++;
	_putchar('\n');
}
