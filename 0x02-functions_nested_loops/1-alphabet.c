#include <stdio.h>

/**
 * main - entry of program
 * Description:  print alphabets
 * Return: always success
 */

int print_alphabet(void)
{
	char a = 'a';

	for(a = 'a'; a <= 'z'; a++);
		_putchar(a);
	putchar("\n");
	
	return (0);
}
