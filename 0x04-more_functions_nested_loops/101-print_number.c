#include "main.h"

void print_two_digits(int);
void print_three_digits(int);
void print_four_digits(int);

/**
 * print_number - entry of program
 * @n: number to print
 * Description: This function takes an integer and prints to the terninal
 * Return: void
 */

void print_number(int n)
{
	if (n / 100)
	{
		print_four_digits(n);
	}
	else if (n / 100)
	{
		print_three_digits(n);
	}
	else if (n / 10)
	{
		print_two_digits(n);
	}
	else
	{
		_putchar('0' + n);
	}
}
