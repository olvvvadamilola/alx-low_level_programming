#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* puts2 - prints every other character of a string
* @str: string
*
* Return: 0
*/
void puts2(char *str)
{
	int length = strlen(str);
	int i;

	for (i = 0; i < length; i += 2)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
