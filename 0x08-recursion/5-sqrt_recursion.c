#include "main.h"

int _sqrt_recursion_helper(int, int, int);

/**
 * _sqrt_recursion - Determines the square root of n
 * @n: number to be examine
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0, n));
}

/**
 * _sqrt_recursion_helper - Determinea if a is palimdrome
 * @n: number to be examine
 * @start: number to start search
 * @end: number to end search
 * Return: square root of end
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	long mid;

	if (start > end)
	{
		return (-1);
	}
	mid = (start + end);

	if (mid * mid == n)
	{
		return ((int)mid);
	}
	else if (mid * mid < n)
	{
		return ((int)_sqrt_recursion_helper(n, mid + 1, end));
	}
	else
	{
		return ((int)_sqrt_recursion_helper(n, start, mid - 1));
	}
}
