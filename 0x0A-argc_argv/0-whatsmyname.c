#include <stdio.h>

/**
 * main - prints it's name to the screen
 * @argc: Count of commandline arguments
 * @argv: vector containing commandline arguments
 *
 * Return: Always 0 (succesful)
 */

int __attribute__((unused)) main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
