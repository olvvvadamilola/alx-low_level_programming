#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checker - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int checker(char *s, int i, int len)
{
	if (*(s + i) == *(s + len))
	{
		if (i == len || i == len + 1)
			return (1);
		return (0 + checker(s, i + 1, len - 1));
	}
	return (0);
}


/**
 * is_palindrome - detects if string is a palindrome
 * @s: string
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, _strlen_recursion(s) - 1));
}
