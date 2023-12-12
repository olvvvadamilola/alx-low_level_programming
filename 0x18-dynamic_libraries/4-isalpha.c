#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _isalpha - function to check if character is alphabet
* @c: the character to check
*
* Return: 1 if char i alphabet, 0 if not
*/
int _isalpha(int c)
{
	if (isalpha(c))
{
	return (1);
}
	else
{
	return (0);
}
}
