#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - A function that recursively prints a string in reverse order.
 *  @s: input string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
