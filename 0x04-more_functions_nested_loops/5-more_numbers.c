#include "main.h"

/**
 * more_numbers - entry of program
 * Description: Print out the number 0 to 14 ten times to the terminal
 * Return: void
 */

void more_numbers(void)
{
	int t, a;

	for (t = 0; t < 10; t++)
	{
		a = 0;
		while (a < 15)
		{
			int cur;

			cur = a;
			
			if (cur / 10)
			{
				_putchar('0' + (cur /  10));
				cur %= 10;
			}
			_putchar('0' + cur);
			a++;
		}
		_putchar('\n');
	}
}
