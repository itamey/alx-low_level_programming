#include "main.h"

/**
 * times_table- entry of program
 * Description: prints the 9x9 table
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int temp = i * j;

			if (temp / 10)
			{
				int a;
				int b;

				a = temp / 10;
				b = temp % 10;
				_putchar('0' + a);
				_putchar('0' + b);
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar('0' + temp);
			}

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
