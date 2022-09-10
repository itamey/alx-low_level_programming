#include <stdio.h>

/**
 * main - entry of program
 * Description:prints number of base 10 starting from 0
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
