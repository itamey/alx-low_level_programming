#include "main.h"

/**
 * largest_number - entry of program
 * @a: number to be tested
 * @b: number to be tested
 * @c: number to be tested
 * Description: prints the largest of three numbers
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
