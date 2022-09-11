#include <stdio.h>

/**
 * main - entry of program
 * Description: prints all possible combination of three digits with a comma
 * Return: Always (success)
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 9; a++)
	{
		for (b = (a + 1); b <= 9; b++)
		{
			for (b = (a + 1); b <= 9; b++)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);

				if (a < 8)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
