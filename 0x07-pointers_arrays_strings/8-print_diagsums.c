#include "main.h"

/**
 *print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to a multidimensional array
 * @size: specified size of array
 * Return: void
 */

void print_diagsums(int	*a, int size)
{
	int i, j, k;
	long sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0, j = 0, k = (size - 1);
	(i < 20) && (j < size) && (k > -1); i++, j++, k--)
	{
		sum1 += *(a + size * i + j);
		sum2 += *(a + size * i + k);
	}
	printf("%ld, %ld\n", sum1, sum2);
}
