#include "main.h"

/**
 * print_sign - entry of program
 * Description:   print sign of values assigned
 * @n: the character code to evaluate
 * Return: returns - if it is below
 * 0 and 1 if it above zero
 * returns zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
