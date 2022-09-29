#include "main.h"

/**
 * _pow_recursion - returns the the result of x ^ y
 * @x: number to be multiplied by @y times
 * @y: number of times to multiply @x
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
