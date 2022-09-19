#include "main.h"

/**
 * swap_int - entry of program
 * @a: pointer to the first int variable
 * @b: pointer to the second int variable
 * Description: This program swaps the values of two integers
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
