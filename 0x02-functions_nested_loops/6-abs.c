#include "main.h"

/**
 * _abs - entry of program
 * Description: print absolute value of anumber
 * @n: the character code to evaluate
 * Return: returns n as absolut value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
