#include <stdio.h>

/**
 * main - entry of program
 * Description: prints all possible combination of 2 2-digits with a comma
 * Return: Always (success)
 */

int main(void)
{
	int i, j;

	for (i	= 0; a < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j > i)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98)
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
