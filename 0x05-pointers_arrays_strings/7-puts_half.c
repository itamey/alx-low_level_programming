#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints every other character in a string
 * @str: string to be printed out to the screen
 * Return: void
 */

void puts_half(char *str)
{
	int length;
	int n;
	int start;

	length = _strlen(str);
	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		start = length - n;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	else
	{
		n = length / 2;
		start = length - n;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	_putchar('\n');
}
