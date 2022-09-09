#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints out the last part of a quote in stabdard error
 * Description: write a piece of code
 * return: 1 (success)
 */

int main(void)
{
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}
