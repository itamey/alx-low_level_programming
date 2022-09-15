#include "main.h"

/**
 * _isdigit - entry of program
 * @c: value to be checked
 * Description: Checks for a digit and retirns
 * 1 if c is a digit else 0 if other wise
 * using ASCII code
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
