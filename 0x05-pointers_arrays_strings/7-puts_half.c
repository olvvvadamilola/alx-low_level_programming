#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts_half - prints second half of a string
* @str: string
*
* Return: 0
*/
void puts_half(char *str)
{
	int length = strlen(str);
	int i;
	int start;

	if (length % 2 == 0)
{
	start = length / 2;
}
	else
{
	start = (length + 1) / 2;
}
	for (i = start; i < length; i++)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
