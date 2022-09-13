#include <stdio.h>

/**
 * main - entry of program
 * Description:  code print alphabet
 * Return: no return value
 */

void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
}
