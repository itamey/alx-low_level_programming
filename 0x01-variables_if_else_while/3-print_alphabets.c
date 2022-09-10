#include <stdio.h>

/**
 * main - entry of program
 * Description:prints alphabets in lower amd upper case
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
