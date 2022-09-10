#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for the program
 * Description: The function generates a random number "n"
 * Return: 0 (Successful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d and is", n, n);

	if (n >	5)
{
	printf("and is greater than 5");
}
	if (n == 0)
{
	printf("and is zero");
}
	if (n < 6 && != 0)
{
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
