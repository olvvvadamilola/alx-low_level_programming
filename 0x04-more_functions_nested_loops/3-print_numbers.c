#include "main.h"
#include <stdio.h>

/**
* print_numbers - prints numbers from 0 to 9
*
* Return: 0
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
{
	_putchar ('0' + n);
}
	_putchar ('\n');
}
