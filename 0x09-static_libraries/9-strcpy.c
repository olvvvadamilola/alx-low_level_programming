#include <stdio.h>
#include "main.h"
#include <string.h>

/**
* _strcpy - prototype to copy strings
* @dest: destination buffer to copy to
* @src: source string to copy to
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *dest_main = dest;

	for (; *src != '\0'; src++, dest++)
{
	*dest = *src;
}
	*dest = '\0';

	return (dest_main);
}
