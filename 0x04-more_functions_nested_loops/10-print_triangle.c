#include "main.h"

/**
 * print_triangle - entry of program
 * @size: the size of triangle
 * Description: program to form display triangle on the terminal using #
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 1;
		while (i < size)
		{
			int space = i;
			int hash;

			space = size - i;

			hash = i;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			while (hash > 0)
			{
				_putchar('#');
				hash--;
			}

			_putchar('\n');

			i++;
		}
	}
}
