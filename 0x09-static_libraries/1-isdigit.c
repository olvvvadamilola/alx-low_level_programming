#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - function to check for a digit
* @c: character
*
* Return: 1 if c is digit, 0 if otherwise
*/
int _isdigit(int c)
{
	if (isdigit(c))
{
	return (1);
}
	else
{
	return (0);
}
}
