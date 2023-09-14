#include "main.h"
#include <stdio.h>
/**
* print_triangle - prints triangle across terminal
* @size: number of times to print character '#'
*
* Return: 0
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
{
	_putchar ('\n');
}
	else
{
	for (i = 1 ; i < size; i++)
{
	for (j = i; j < size; j++)
{
	_putchar (' ');
}
	for (j = 1; j <= i; j++)
{
	_putchar ('#');
}
	_putchar ('\n');
}
}
}
