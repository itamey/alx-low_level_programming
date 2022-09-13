#include "main.h"

/**
 * _isalpha - entry of program
 * Description: code checks for lower, letter or upper case of c
 * according to ASCIIcode
 * @c: the character code to evaluate
 * Return: returns one if c is letter, upper or lower case
 * returns zero
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
