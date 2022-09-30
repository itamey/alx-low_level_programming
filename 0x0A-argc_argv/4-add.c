#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int is_num(char *str)

/**
 * main - calculate and prints the product of commandline arguments
 * @argc: count of all the commandline arguments
 * @argv: vector containing all the commandline arguments
 * Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int i, num1, num2;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]))
		{
			num1 = atoi(argv[1]);
			if (num > 0)
				sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_num - determines if a string is an integer
 * @str: string to be examined
 * Return: 0 or 1
 */

int is_num(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (isdigit(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
