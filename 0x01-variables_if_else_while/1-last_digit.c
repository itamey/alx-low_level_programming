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

	printf("Last digit of %d is %d ", n, n % 10);

	if (n >	5)
{
	printf("and is greater than 5\n");
}
	else if (n == 0)
{
	printf("and is zero\n");
}
	else
{
	printf("and is less than 6 and not 0\n");
}
	return (0);
}
