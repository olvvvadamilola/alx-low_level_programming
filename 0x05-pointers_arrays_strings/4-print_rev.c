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
	int l = 0;
	int i;

	for (; *s != '\0'; l++, s++)
{
}
	for (i = l; i > 0; i--)
{
	_putchar(*s);
	s--;
}
	_putchar('\n');
}
