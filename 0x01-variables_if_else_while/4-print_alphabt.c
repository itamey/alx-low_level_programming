#include <stdio.h>

/**
 * main - entry of program
 * Description:prints all alphabets except q and e
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')

		putchar(c);
	}

	putchar('\n');

	return (0);
}
