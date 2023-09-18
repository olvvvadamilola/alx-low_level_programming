#include <stdio.h>
#include "main.h"

/**
* print_rev - print string  in reverse
* @s: integer
*
* Return: 0
*/
void print_rev(char *s)
{
	int length = 0;
	int i;

	for (; *s != '\0'; length++, s++)
{}
	for (i = length; i >= 0; i--, s--)
{
	_putchar(*s);
}
	_putchar('\n');
}
