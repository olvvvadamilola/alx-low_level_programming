#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat -concatenates two strings n times
 * @dest: destination
 * @src: source
 * @n: integer
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
