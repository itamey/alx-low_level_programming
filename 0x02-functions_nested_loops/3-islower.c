#include "main.h"

/**
 * _islower - entry of program
 * Description:   print alphabet except lower case c
 * @c: the character code to evaluate
 * Return: returns one if c is present else
 * returns zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
