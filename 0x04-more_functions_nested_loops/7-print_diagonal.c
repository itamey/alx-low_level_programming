#include "main.h"

/**
 * print_diagonal - entry of program
 * @n: the number of times to print / in order to form a diagonal on the screen
 * Description: program to form diagonal on the terminal
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		i = 0;
		while (i < n)
		{
			int space = i;

			while (space > 0)
			{
				_putchar(' ');
				space--;
			}

			_putchar('\\');
			_putchar('\n');

			i++;
		}
	}
}
