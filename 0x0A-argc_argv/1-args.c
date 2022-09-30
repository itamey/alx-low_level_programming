#include <stdio.h>

/**
 * main - prints out the number of commandline arguments
 * @argc: count of all the commandline arguments
 * @argv: vector containing all the commandline arguments
 * Return: Always 0 (Successful)
 */

int __attribute__((unused)) main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", (argc - 1));

	return (0);
}
