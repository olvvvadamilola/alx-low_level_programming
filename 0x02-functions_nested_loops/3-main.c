#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
* islower(int c) - checks for lowercase
* main - Entry point
*
* Return: 1 if character is lowercase, 0 otherwise.
*/
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
