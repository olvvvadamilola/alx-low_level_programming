#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncopy - copies a string
 * @dest: destination of string
 * @src: source to be copied
 * @n: maximum number of character to copy
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
