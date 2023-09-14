#include "main.h"
#include <stdio.h>
/**
* print_line - prints line across terminal
* @n: number of times to print character '_'
*
* Return: 0
*/
void print_line(int n)
{
	if (n <= 0)
{
	_putchar ('\n');
}
	else
{
	int l;
	for (l = 0; l < n; l++)
{
	_putchar ('_');
}
	_putchar ('\n');
}
}
