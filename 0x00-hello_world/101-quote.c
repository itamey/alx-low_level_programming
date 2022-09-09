#include <stdio.h>
#include <string.h>

/**
 * main - main block
 * Description: write a piece of code
 * return: 1
 */
int main(void)
{
	int s = strlen("and that piece of art is useful\"-Dora Korpar, 2015\-10\-19\n");
	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
