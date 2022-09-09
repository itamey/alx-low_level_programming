#include <stdio.h>
#include <string.h>
#include <stderr.h>

/**
 * main - passes an arguement
 * Description: write a piece of code
 * return: 1 (success)
 */

int main(void)
{
	strlen("and that piece of art is useful\"-Dora Korpar, 2015-10-19\n");

	write(2,
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
