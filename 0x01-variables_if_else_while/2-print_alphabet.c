#include <stdio.h>

/** main - entry of program
 *
 * Return: Always (success)
 */

int main(void)
{
	char c;

	for(c = 'a'; c <= 'z';c++)
		putchar(c);
	putchar('\n');
	return (0);
}
