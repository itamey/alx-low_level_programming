#include "main.h"
#include "2-strlen_recursion.c"

int _strlen_recursion(char *);
int palindrome_checker(char *, int, int);

/**
 * is_palindrome - Determinea if s is palimdrome
 * @s: string to be evaluated
 * Return: 1(palindrome) or 0(non palindrome)
 */

int is_palindrome(char *s)
{
	int length;

	length =_strlen_recursion;
	return (palindrome_checker(s, 0, (length - 1);
}

/**
 * palindrome_checker - Determinea if a is palimdrome
 * @s: string to be evaluated
 * @beg: string beginning
 * @end: string end
 * Return: 1(palindrome) or 0(non palindrome)
 */
int palindrome_checker(char *s, int beg, int end)
{
	if (beg >= end)
	{
		return (1);
	}
	if ((*s + beg) != (*s + end))
	{
		return (0);
	}
	else
	{
		return (palindrome_checker9(s, beg + 1, end - 1));
	}
}
/**
 * _strlen_recursion - returns the length of the string
 * @s: string to examine
 * Return: length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
