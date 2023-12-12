#include <stdio.h>
#include "main.h"
/**
 * _strspn - spans/gets the length of a prefix substring
 * @s: string to access
 * @accept: string to use
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length, count;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				count = 1;
			}
		}
		if (count == 0)
			return (length);
	}
	return (length);
}
