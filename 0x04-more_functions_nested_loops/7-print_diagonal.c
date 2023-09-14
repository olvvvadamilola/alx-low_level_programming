#include "main.h"
#include <stdio.h>
/**
* print_diagonal - prints line across terminal
* @n: number of times to print character '\'
*
* Return: 0
*/
void print_diagonal(int n)
{
	if (n <= 0)
{
	_putchar ('\n');
}
	else
{
	int i;

	for (i = 0; i < n; i++)
{

	int j;

	for (j = 0; j < i; j++)
{
	_putchar (' ');
}
	_putchar ('\\');
	_putchar ('\n');
}
}
}
