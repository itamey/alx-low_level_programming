#include "main.h"

/**
 * jack_bauer - entry of program
 * Description: print out every minute of the day for jack bauer
 * Return: Void
 */

void jack_bauer(void)
{
	int a = 0;

	while (a <= 2)
	{
		int b = 0;

		while (b <= 9)
		{
			int c = 0;

			while (c < 6)
			{
				int d = 0;

				while (d <= 9)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');

					d++;
				}

				c++;
			}

			if (a == 2 && b == 3)
			{
				break;
			}

			b++;
		}
		a++;
	}
}
