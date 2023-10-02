#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: total number of elements to be copied
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
