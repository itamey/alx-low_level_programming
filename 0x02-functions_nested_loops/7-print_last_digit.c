#include "main.h"
#include <limits.h>

/**
 * print_last_digit - entry of program
 * Description: print last digit of a number
 * @n : the integer value to be evaluated
 * Return: the value of last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		unsigned int temp = n == INT_MIN ? ((unsigned int)-(INT_MIN + 1)) + 1U
			: (unsigned int) -n;
		_putchar('0' + (temp % 10));
		return (temp % 10);
	}
	else
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
}
