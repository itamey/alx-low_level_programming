#include <stdio.h>

/**
 * main - entry point for the program
 *Description: Prints the size of different types the terminal
 *depending if it is 32-bit or 64-bit
 * Return: 0
 */

int main(void)
{
	printf("Size of char: %d byte(s)\n", sizeof(char));
	printf("Size of int: %d byte(s)\n", sizeof(int));	
	printf("Size of long int: %d byte(s)\n", sizeof(long));
	printf("Size of long long int: %d byte(s)\n", sizeof(long long));
	printf("Size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
