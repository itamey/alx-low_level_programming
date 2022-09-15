#include "main.h"

/**
 * print_most_numbers - entry of program
 * Description: Prints the number 0 to 9 except 2 and 4
 * Return: success
 */

void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a < 10)
	{
		if (a == 2 || a == 4)
		{
			a++;
			continue;
		}
		else
		{
			_putchar('0' + a);
		}
		a++;
	}
	_putchar('\n');
}
