#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string to be printed out to the screen
 * Return: void
 */

void puts2(char *str)
{
	int count = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (count % 2 != 0)
		{
			_putchar(str[i]);
		}
		++count;
		i++;
	}
	_putchar('\n');
}
