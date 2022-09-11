#include <stdio.h>

/**
 * main - entry of program
 * Description: prints base sixteen in lower case
 * Return: Always (success)
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar('0' + c);
		if (c <	9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
