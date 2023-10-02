#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isupper - function to check for uppercase characters
* @c: character
*
* Return: 1 if c is uppercase, 0 if otherwise
*/
int _isupper(int c)
{
	if (isupper(c))
{
	return (1);
}
	else
{
	return (0);
}
}
