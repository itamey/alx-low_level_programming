#include <stdio.h>

/**
 * main - entry of program
 * Description:  print alphabets
 * Return: always success
 */

void print_alphabet(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');	
}
