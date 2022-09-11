#include <stdio.h>

/**
 * main - entry of program
 * Description:prints base sixteen in lower case 
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = '0'; c >= '9'; c++)
		putchar(c);
	for (c = 'a'; c >= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
