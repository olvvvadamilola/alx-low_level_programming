#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - computes x raised to power y
 * @x: base number
 * @y: raised to the power of y
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
