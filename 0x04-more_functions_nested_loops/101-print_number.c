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

/**
 * print_two_digits - prints two digit number to the screen
 * @n: Number to be printed
 *
 * Return: void
 */
void print_rwo_digits(int n)
{
	int num1;
	int num2;

	num1 = n / 10;
	num2 = n % 10;
	if (n < 0)
	{
		num1 = -num1;
		num2 = -num2;
		_putchar('-');
	}
	_putchar('0' + num1);
	_putchar('0' + num2);
}

/**
 * print_three

