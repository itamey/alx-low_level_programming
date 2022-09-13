#include <stdio.h>

/**
 * main - entry of program
 * Description:  print alphabets
 * Return: always success
 */

int print_alphabet(void)
{
	char a = 'a';

	while(a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar("\n");
	
	return (0);
}
