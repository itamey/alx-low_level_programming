#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Description: The function generates a random number "n"
 * and uses a series of it..else statements to determine whether the random
 * number generated is zero, a positive number or a negative number.
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
{
	printf("%d is zero,\n", n);
}
	if (n >	0)
{
	printf("%d is positive,\n", n);
}	
	if (n <	0)
{
	printf("%d is negative,\n", n);
}
	return 0;
}
