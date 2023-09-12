#include <stdio.h>
#include "main.h"

/**
* jack_bauer - prints every hour and minute of the day of jack bauer
*
* Return: 0
*/
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 24; hour++)
{
	for (minute = 0; minute <= 59; minute++)
{
	_putchar('0' + (hour / 10));
	_putchar('0' + (hour % 10));
	_putchar(':');
	_putchar('0' + (minute / 10));
	_putchar('0' + (minute / 10));
	_putchar('\n');
}
}
}
