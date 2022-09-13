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
		_putchar(a);
		a++;
	}

	_putchar('\n');
	
	return (0);
}
