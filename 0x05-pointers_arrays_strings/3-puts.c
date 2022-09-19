#include "main.h"

/**
 * _puts - entry of program
 * @str: string to be printed out to the screen
 * Description: This program prints a string followed by a new line
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
