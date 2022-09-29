#include "main.h"

int primenumber_check(int, int);

/**
 * is_prime_number - checks for prime number
 * @n: number to be examine
 * Return: return 1(prime number) or 0(not prime number)
 */

int is_prime_number(int n)
{
	int start;

	start = 2;
	
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (primenumber_check(start, n));
}

/**
 * primenumber_check - helps determines if n is a prime number
 * @n: number to be examine
 * @start: number to start search
 * Return: return 1(prime number) or 0(not prime number)
 */

int primenumber_check(int start, int n)
{
	if (start == n)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	else
	{
		return (primenumber_check(start + 1, n));
	}
}
