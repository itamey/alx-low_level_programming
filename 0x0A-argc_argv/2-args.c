#include <stdio.h>

/**
 * main - prints all commandline arguements to the screen
 * @argc: count of all the commandline arguments
 * @argv: vector containing all the commandline arguments
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
