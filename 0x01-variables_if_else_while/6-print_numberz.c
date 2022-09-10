#include <stdio.h>

/**
 * main - entry of program
 * Description:prints all single digit of base 10 starting from 0
 * Return: Always (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
