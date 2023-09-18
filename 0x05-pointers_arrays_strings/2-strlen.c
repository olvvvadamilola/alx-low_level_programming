#include <stdio.h>
#include "main.h"

/**
* _strlen - length of string prototype
* @s: integer
*
* Return: 0
*/
int _strlen(char *s)
{
	int length = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
{
	length++;
}
	return (length);
}
