#include "main.h"
#include <stdio.h>
/**
* more_numbers - prints numbers ten times from 0 to 14
*
* Return: 0
*/
void more_numbers(void)
{
	int ten;
	int n;

	for (ten = 0; ten < 10; ten++)


{
	for (n = 0; n <= 14; n++)
{
	if (n >= 10)
{
	_putchar ('0' + (n / 10));
}
	_putchar ('0' + (n % 10));
}
	_putchar ('\n');
}
}
