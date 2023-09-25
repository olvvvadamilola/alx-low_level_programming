#include <stdio.h>
#include "main.h"
/**
 * _strpbrk- searches a string for any of a set of bytes
 * locate multiple characters in string
 * @s: string
 * @accept: character to find
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i])
		{
			return (&s[i] - 1);
		}
	}
	return (NULL);
}
