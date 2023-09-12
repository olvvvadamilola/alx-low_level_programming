#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* _islower - function to print lowercase
* @c: the character to check
*
* Return: 1 if char i slowercase, 0 if not
*/
int _islower(int c)
{
	if (islower(c))
{
	return (1);
}
	else
{
	return (0);
}
}
