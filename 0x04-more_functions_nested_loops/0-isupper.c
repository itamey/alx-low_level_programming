#include "main.h"

/**
 * _isupper - entry of program
 * @c: value to be checked
 * Description: Checks for uppercase
 * and returns 1 if c is uppercase or 0 if other wise
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
