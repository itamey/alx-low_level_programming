#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - entry of program
 * Description:  print all natural numbers upto 98
 * @n: number to start counting from
 * Return: Void
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d\n", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
}
