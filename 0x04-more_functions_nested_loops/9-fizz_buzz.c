#include <stdio.h>

/**
 * main - simple "fizz buzz" program
 * Description:  a simple buzz feed program
 * Return: void
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3)
		{
			printf("Fizz ");
		}
		else if (i % 5)
		{
			printf("Buzz ");
		}
		else if ((i % 3) || (i % 5))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("\n");

	return (0);
}
